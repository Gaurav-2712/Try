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

int main()
{

    create(); //count();
    //insert_first(); //count();
    //insert_first(); //count();
    //insert_first(); //count();
    //search();
    // Delete_first();
    //Delete_first();
    //insert_last(); //count();
    // insert_last();
    //Delete_first();
    //Delete_last();
    //Delete_last();
    //randominsert(); //Display(head);
    //randominsert(); //Display(head);
    //randominsert(); //Display(head);
    //randominsert();// Display(head);

    randomdelete();
    randomdelete();
    //random_delete();
    //random_delete();

    //Display(head);
}
//the end
