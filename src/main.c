#include "civetweb.h"
#include "handlers.h"
#include <stdio.h>

int main() {
    const char *options[] = {
        "listening_ports", "8080",
        NULL
    };
    
    struct mg_callbacks callbacks;
    struct mg_context *ctx;
    
    memset(&callbacks, 0, sizeof(callbacks));
    
    // เริ่มเซิร์ฟเวอร์
    ctx = mg_start(&callbacks, NULL, options);
    
    if (ctx == NULL) {
        printf("Failed to start CivetWeb\n");
        return 1;
    }

    // กำหนด route สำหรับ CRUD
    mg_set_request_handler(ctx, "/todos", handle_get_todos, NULL);            // GET /todos
    mg_set_request_handler(ctx, "/todos", handle_post_todos, NULL);           // POST /todos
    mg_set_request_handler(ctx, "/todos/", handle_put_todo, (void *)1);       // PUT /todos/:id
    mg_set_request_handler(ctx, "/todos/", handle_delete_todo, (void *)1);    // DELETE /todos/:id
    
    printf("Server started on port 8080\n");
    getchar(); // รอให้ผู้ใช้กด Enter เพื่อหยุดเซิร์ฟเวอร์
    
    // หยุดเซิร์ฟเวอร์
    mg_stop(ctx);
    
    return 0;
}
