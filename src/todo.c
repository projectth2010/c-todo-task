#include "todo.h"
#include <string.h>

Todo todos[MAX_TODOS];
int todo_count = 0;

Todo* find_todo_by_id(int id) {
    for (int i = 0; i < todo_count; i++) {
        if (todos[i].id == id) {
            return &todos[i];
        }
    }
    return NULL;
}

void add_todo(const char *title) {
    if (todo_count < MAX_TODOS) {
        Todo new_todo = { .id = todo_count + 1, .completed = 0 };
        strcpy(new_todo.title, title);
        todos[todo_count++] = new_todo;
    }
}

int update_todo(int id, const char *title, int completed) {
    Todo* todo = find_todo_by_id(id);
    if (todo) {
        strcpy(todo->title, title);
        todo->completed = completed;
        return 1;
    }
    return 0;
}

int delete_todo(int id) {
    for (int i = 0; i < todo_count; i++) {
        if (todos[i].id == id) {
            for (int j = i; j < todo_count - 1; j++) {
                todos[j] = todos[j + 1];
            }
            todo_count--;
            return 1;
        }
    }
    return 0;
}
