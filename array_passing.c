#include<stdio.h>


int array_sum(int *arr,int size)
{
    int sum=0;

    for(int i=0;i<size;i++)
    {
        sum=sum + *(arr+i);
    }

    return sum;

}


int main()
{
    int size;

    printf("enter the size of the array you want \n");
    scanf("%d",&size); 

    int arr[size];

    // getting input from the user
    for(int i=0;i<size;i++)
    {
        printf("enter the value for %d index\n",i);
        scanf("%d",&arr[i]);
    }

    int answer = array_sum(arr,size);
    printf("\n");
    printf("%d\n",answer);

    return 0;
    // to-do

}


