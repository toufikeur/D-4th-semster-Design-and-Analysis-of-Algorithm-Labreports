#include<stdio.h>
int queue[1000],choice,front=-1,rear=-1,n;
void insert(void);
void delete(void);
void display(void);


int main()
{
    printf("Enter the choce size:");
    scanf("%d",&n);
    printf("Queue opereations:");
    printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
    do
    {
        printf("Enter your chocie:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                insert();
                break;
            }
              case 2:
            {
                delete();
                break;
            }
              case 3:
            {
                display();
                break;
            }
              case 4:
            {
                printf("Exit point\n");
                break;
            }
              default :
            {
                printf("Enter a valid choice (1/2/3/4)");
            }


        }
        }while(choice!=4);
        return 0;
    }
    void insert()
    {
        int item;
        printf("Enter the element:");
        scanf("%d",&item);
        if(rear == n-1)
        {
            printf("overflow\n");
            return ;
        }
        if(front ==-1 && rear ==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=item;
        printf("Value inserted");

    }
    void delete()
    {
        int item;
        if(front==-1 || front>rear)
        {

            printf("Under flow\n");
            return;
        }
        else{
            item=queue[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else{
                front=front+1;
            }
            printf("value delete");
        }

    }

    void display()
    {
    int i;
    if(rear==-1)
    {

        printf("Queu is empty\n");

    }
    else{
        printf("Printing values are ::");
        for(i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
    }
