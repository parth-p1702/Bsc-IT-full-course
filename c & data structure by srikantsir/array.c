#include<stdio.h>
int main()
{
    int arr[5],large,small,i;

    for(int i=0;i<5;i++)
    {
        printf("Enter value\n");
        scanf("%d", &arr[i]);
    }
    large=small=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>large)
            large=arr[i];
        if(arr[i]<small)
            small=arr[i];
    }
    printf("Large number is: %d",large);
    return 0;
}
