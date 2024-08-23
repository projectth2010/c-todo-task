#ifndef HANDLERS_H
#define HANDLERS_H

#include "civetweb.h"

int handle_get_todos(struct mg_connection *conn, void *cbdata);
int handle_post_todos(struct mg_connection *conn, void *cbdata);
int handle_put_todo(struct mg_connection *conn, void *cbdata);
int handle_delete_todo(struct mg_connection *conn, void *cbdata);

#endif // HANDLERS_H
