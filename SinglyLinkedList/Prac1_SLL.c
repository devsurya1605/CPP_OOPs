#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _employee
{
    // char name[32];
    char *name;
    int age;
}Employee;

typedef struct _node
{
    void *data;
    struct _node *next;
    
}node;
typedef struct _SinglyLinkedList
{
    node *head;
    node *tail;
    node *curr;
}SinglyLinkedList;

void InitilizeList(SinglyLinkedList *List)
{
    List->head = NULL;
    List->tail = NULL;
    List->curr = NULL;
}
void addHead(SinglyLinkedList *list, void *data)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = data;
    if(list->head == NULL)
    {
        list->head = newnode;
        list->tail = newnode;
        newnode->next = NULL;
    }
    else
    {
        newnode->next = list->head;
        list->head = newnode;
    }
}

void addTail(SinglyLinkedList *list,void *data)
{
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data =data;
    newnode->next = NULL;
    if(list->head == NULL)
    {
        list->tail = newnode;
        list->head = newnode;
    }
    else
    {
        list->tail->next = newnode;
        list->tail = newnode;
    }
}


int main()
{
    SinglyLinkedList linkedList;
    Employee *samuel = (Employee*) malloc(sizeof(Employee));
    strcpy(samuel->name, "Samuel");
    samuel->age = 32;
    Employee *sally = (Employee*) malloc(sizeof(Employee));
    strcpy(sally->name, "Sally");
    sally->age = 28;
    Employee *susan = (Employee*) malloc(sizeof(Employee));
    strcpy(susan->name, "Susan");
    susan->age = 45;
    InitilizeList(&linkedList);
    addHead(&linkedList, samuel);
    addHead(&linkedList, sally);
    addHead(&linkedList, susan);
    return 0;
}