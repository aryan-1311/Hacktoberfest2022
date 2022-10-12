#include<stdio.h>
int main()
{
    int n,i,sear;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element");
        scanf("%d",arr[i]);

    }
    printf("Enter element to be searched");
    scanf("%d",&sear);
    for(i=0;i<n;i++)
    {
        if (arr[i]==sear)
        {
            printf("Found at= %d",i);
            break;
        }

    }
    return 0;
}