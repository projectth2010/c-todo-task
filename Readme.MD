# RESTful Todo API in C

This project is a simple RESTful API written in C using the [CivetWeb](https://github.com/civetweb/civetweb) HTTP server. It provides CRUD functionality for managing a list of Todo tasks, storing them in memory.

## Features

- **GET /todos**: Retrieve the list of all todo tasks.
- **POST /todos**: Create a new todo task.
- **PUT /todos/{id}**: Update an existing todo task by its ID.
- **DELETE /todos/{id}**: Delete a todo task by its ID.

## Project Structure

restful_todo/
│
├── include/
│ └── todo.h # Header file for Todo structure and functions
│
├── src/
│ ├── main.c # Main program
│ ├── todo.c # Todo task management (add, update, delete)
│ └── handlers.c # HTTP request handlers (GET, POST, PUT, DELETE)
│
├── Makefile # Makefile for building the project
└── README.md # Project documentation


## Requirements

- `gcc` (GNU Compiler Collection)
- `CivetWeb` (HTTP server library)
- `pthread` (POSIX Threads)

## Build Instructions

To build the project, follow these steps:

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/restful_todo.git
   cd restful_todo
Build the project using make:


make
Run the server:



./restful_todo
API Endpoints
1. GET /todos
Retrieves the list of all todo tasks.

Example:


curl http://localhost:8080/todos
Response:

[
  { "id": 1, "title": "Buy groceries", "completed": 0 },
  { "id": 2, "title": "Read a book", "completed": 1 }
]
2. POST /todos
Creates a new todo task.

Example:


curl -X POST -d '{"title":"New Task"}' http://localhost:8080/todos
Response:

{
  "message": "Todo created"
}
3. PUT /todos/{id}
Updates an existing todo task by its ID.

Example:


curl -X PUT -d '{"title":"Updated Task","completed":1}' http://localhost:8080/todos/1
Response:

{
  "message": "Todo updated"
}
4. DELETE /todos/{id}
Deletes a todo task by its ID.

Example:


curl -X DELETE http://localhost:8080/todos/1
Response:

{
  "message": "Todo deleted"
}


## Clean the Project
To clean up the object files and executable:


make clean


License
This project is licensed under Apache License  Version 2.0, January 2004. See the LICENSE file for more details.

References
CivetWeb Documentation