#include<stdio.h>
int stact[1000],choice,x,i,n,top;
void push(void);
void pop(void);
void display(void);
int main(){
                top=-1;
                printf("Enter the stact elements number[max=1000]:");
                scanf("%d",&n);

                printf("\n\n1.push\n\n2.pop\n\n3.display\n\n4.Exit\n");
                do{
                    printf("Enter your choice:");
                    scanf("%d",&choice);
                    switch(choice){
                                            case 1{
                                            push();
                                            break;
                                            }
                                            case 2{
                                            pop();
                                            break;
                                            }
                                            case 3{
                                            display();
                                            break;
                                            }
                                            case 4{
                                            printf("\nExit point");
                                            break;
                                            }
                                            default;
                                            {
                                            printf("Enter valid choice:(1/2/3/4)");
                                            }
                    }
                }
                                           while(choice!=4)
                                           {
                                                return 0;
                                            }

                }

                void push(){
                                if(top>=n-1){
                                    printf("\nThe stack is over flow\n");

                                }
                                else {
                                    printf("Enter the vale you want to push:");
                                    scanf("%d",&x);
                                    top++;
                                    stack[top]=x;
                                }
                                }
                                void pop(){
                                                if(top<=-1){
                                                    printf("Stack is under flow");
                                                }
                                                else{
                                                    printf("The pop elements is:%d",stack[top]);
                                                    top--;

                                                }
                                                }
                             void display(){
                                                if(top>=)
                                                }

                }

