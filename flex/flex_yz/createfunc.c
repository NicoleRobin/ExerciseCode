#include "createfunc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Node *create_db_num(char *name, int num)
{
    if (!name) return NULL;
    CreateDB *db = (CreateDB*)malloc(sizeof(CreateDB));
    db->type = CREATE_DB;
    db->name = name;
    db->num = num;
    return (Node*)db;
}
char * create_string(const char *name){
    char *buf = malloc(strlen(name)+1);
    strcpy(buf, name);
    return buf;
}

void debuginfo(Node *node){
    switch(node->type){
        case CREATE_DB:
            {
                CreateDB *db = (CreateDB*)node;

                printf("debug: database->%s number->%d\n", db->name, db->num);
                break;
            }
        default:
            break;
    }
}
void freeNode(Node*db){
    if (!db) return;
    switch(db->type){
        case CREATE_DB:
            {
                CreateDB *db = (CreateDB*)db;
                if (!db->name) free(db->name);
                free(db);
                break;
            }
        default:
            break;
    }
}
