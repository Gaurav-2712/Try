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

void Display(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Linkedlist is Empty....\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_first()
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));

    if (ptr == NULL)
        printf("Memory Not Allocated \n");
    else
    {
        ptr->data = getdata();
        ptr->next = head;
        head = ptr;
        printf("Node Inserted....\n");
        Display(head);
    }
    
}

void insert_last()
{
    struct Node *ptr , *temp;

    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = getdata();
    

    if(ptr==NULL)
    {
        printf("Memory Not Allocated\n");
        return;
    }
    else
    {
        if(head==NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Data Inserted\n");
        }
        else
        {
            temp = head;
            while (temp->next!=NULL)
            {
                temp = temp->next;
            }

            temp->next = ptr;
            ptr->next = NULL;
            printf("Node Inserted...\n");
        }
        Display(head);
    }
    
}

void Delete_last()
{
    struct Node *ptr,*temp;

    if(head==NULL)
    {
    printf("Linkedlist is Empty....\n");
    return;
    }
    else if(head->next==NULL)
    {
        head = NULL;
        free(head);
        printf("Element Deleted and Now Linkedlilst is Empty.....\n");
    }
    else
    {
        ptr = head;
        while (ptr->next!=NULL)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = NULL;
        free(ptr);
        printf("Element is Deleted...\n");
        Display(head);  
    }    
}

void Delete_first()
{
    struct Node *ptr;
    ptr = head;

    if (ptr == NULL)
        printf("Linklist is Empty...\n");
    else
    {
        head = ptr->next;
        free(ptr);
        printf("Element Deleted....\n");
         Display(head);
    }
}

void create()
{
    struct Node *ptr, *ptr1;
    int n;
    printf("Enter the Size of Linked list : ");
    scanf("%d", &n);

    head = (struct Node *)malloc(sizeof(struct Node));

    // ptr = head ;
    // ptr->data = getdata();
    // ptr->next = NULL;

    head->data = getdata();
    head->next = NULL;
    ptr = head;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            ptr->next = NULL;
        else
        {
            ptr1 = (struct Node *)malloc(sizeof(struct Node));
            ptr->next = ptr1;
            ptr1->data = getdata();
            ptr1->next = NULL;
            ptr = ptr1; // ptr = ptr->next;
        }
    }
    Display(head);
}

void randominsert()
{
    struct Node *ptr,*temp;
    ptr = (struct Node*)malloc(sizeof(struct Node));

    int loc;
    printf("Enter the Number of Location :");
    scanf("%d",&loc);

    temp = head;

    for(int i=1;i<loc;i++)
    {
        if(temp == NULL)
        {
            printf("Can't inserted");
            return;
        }
        temp = temp->next;
    }

    ptr->data = getdata();
    ptr->next = temp->next;
    temp->next = ptr;

    printf("Node inserted....\n");
    Display(head);

}

void randomdelete()
{
    struct Node *ptr,*ptr1;
    int loc;

    printf("Enter the location : ");
    scanf("%d",&loc);

    ptr = head;
    for(int i=0;i<loc;i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if(ptr == NULL)
        {
            printf("Can't Deleted....\n");
            return;
        }
    }

    ptr1->next = ptr->next;
    free(ptr);
    printf("Node Deleted...\n");
    Display(head);
}

void count()
{
    struct Node *ptr;
    int cnt=0;
    ptr=head;

    while (ptr!=NULL)
    {   
        cnt++;
        ptr = ptr->next;
    }
    printf("Total Node : %d\n",cnt);
}

void search()
{
    struct Node *ptr;
    ptr = head;
    int key,cnt=0;

    printf("Enter key : ");
    scanf("%d",&key);

    while (ptr!=NULL)
    {
        if(ptr->data==key)
        {
        printf("Element Found on location : %d\n",cnt);
        return;
        }
        ptr = ptr->next;
        cnt++;
    }
    printf("Not Found....\n");    
}


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