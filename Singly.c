#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head;

int getdata()
{
    int item;
    printf("Enter Element : ");
    scanf("%d", &item);
    return item;
}
// hello

//the end
