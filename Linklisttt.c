#include <stdio.h>
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_pos();

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
        printf(" 4.Insert at the end \n");
        printf(" 5.Insert at specified position \n");
        printf(" 6.Delete from specified position \n");
        printf(" 7.Exit \n");
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
            insert_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            delete_pos();
            break;

        case 7:
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
void insert_end()
{
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Out of Memory Space:\n");
        return;
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
void insert_pos()
{
    struct node *ptr, *temp;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Out of Memory Space:\n");
        return;
    }
    printf("Enter the position for the new node to be inserted:");
    scanf("%d", &pos);
    printf("Enter the data value of the node:");
    scanf("%d", &temp->info);

    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = start;
        start = temp;
    }
    else
    {
        for (i = 0, ptr = start; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("Position not found:[Handle with care]\n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void delete_pos()
{
    int i, pos;
    struct node *temp, *ptr;
    if (start == NULL)
    {
        printf("The List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("Enter the position of the node to be deleted:");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = start;
            start = start->next;
            printf("\nThe deleted element is:%d ", ptr->info);
            free(ptr);
        }
        else
        {
            ptr = start;
            for (i = 0; i < pos; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("Position not Found:\n");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("The deleted element is:%d", ptr->info);
            free(ptr);
        }
    }
}
