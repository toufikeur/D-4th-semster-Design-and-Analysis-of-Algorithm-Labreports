#include<stdio.h>
int main()
{

    int n,req,low,mid,high,i;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sorted elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the required number:");
    scanf("%d",&req);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(arr[mid]<req)
        {
            low=mid+1;
        }
        else if( arr[mid]==req)
        {
            printf("%d Value is found at %d th position",req,mid+1);
            break;
        }
        else
        {
            high=mid-1;
        }
        mid=(low+high)/2;

    }
if(low>high)
{
    printf("Not found");
}
}
