#include <bits/stdc++.h>
using namespace std;
void create();
void display();
void insert_begin();

struct node
{
    int info;
    struct node *next;
};
struct node *start = NULL;
int main()
{
    int choice;
    while (1)
    {

        printf("\nMENU:\n");
        printf(" 1.Create\n");
        printf(" 2.Display \n");
        printf(" 3.Insert at the beginning \n");
        printf(" 4.Exit \n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("n Wrong Choice:n");
            break;
        }
    }
    return 0;
}
void create()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Out of Memory Space:\n");
        exit(0);
    }
    printf("Enter the data value for the node:");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display()
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("List is empty:\n");
        return;
    }
    else
    {
        ptr = start;
        printf("The List elements are: \n");
        while (ptr != NULL)
        {
            printf(" %d ", ptr->info);
            ptr = ptr->next;
        }
    }
}
void insert_begin()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the data value for the node:");
    scanf("%d", &temp->info);
    temp->next = NULL;
    if (start == NULL)
    {
        start = temp;
    }
    else
    {
        temp->next = start;
        start = temp;
    }
}
