#ifndef TODO_H
#define TODO_H

#define MAX_TODOS 100

typedef struct {
    int id;
    char title[256];
    int completed;
} Todo;

extern Todo todos[MAX_TODOS];
extern int todo_count;

Todo* find_todo_by_id(int id);
void add_todo(const char *title);
int update_todo(int id, const char *title, int completed);
int delete_todo(int id);

#endif // TODO_H
