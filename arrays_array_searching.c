#include<stdio.h>
int main()
{

    int arr[10];

    for(int i=0;i<10;i++)
    {
        printf("enter value of the %d element of the array",i);
        scanf("%d", &arr[i]);

    }

    
    int search_num;
    printf("enter the number you want to search \n");
    scanf("%d",&search_num);

    for(int i=0; i<10;i++)
    {
        if(arr[i] == search_num)
        {
            printf(" found number %d at index %d",search_num,i);
            break; // it is used to exit out from the loop statement
        }
    }


    // adresses
    // printf("%p\n",arr+2);
    // printf("%p\n",&arr[2]);


    // values
    // printf("%d\n",arr[2]);
    // printf("%d",*(arr+2));


    printf("\n");
}