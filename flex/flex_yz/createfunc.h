#ifndef CREATE_FUNC_H
#define CREATE_FUNC_H
#include <stdio.h>

//#define CREATE_DB(name) create_db_num(name,2)
//#define CREATE_DB_NUM(name, num) create_db_num(name, num)

typedef enum Type{
    NORMAL = 0,
    CREATE_DB
}Type;
typedef struct Node{
    Type type;
}Node;
typedef struct CreateDB{
    Type type;
    char *name;
    int num;
}CreateDB;
//void hello(){ printf("hello\n"); }
Node *create_db_num(char *name, int num);
char * create_string(const char *name);
void debuginfo(Node *db);
void freeNode(Node*db);
#endif
