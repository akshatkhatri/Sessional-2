#include<stdio.h>


void sum(int a, int b); // function prototyping 
// pass by reference 
void ptrsum(int *a, int *b)
{
    printf("sum of these two pointers pointing is \n");
    int c= *(a) + *(b);
    printf("%d\n",c);
}

int main()
{
    int a=10;
    int b=6;

    int *ptra= &a; // '&' is the adress of operator
    int *ptrb= &b;


    // printf("%p\n",*ptra);
    // printf("%p",ptrb);

    ptrsum(ptra,ptrb);
    

    // int c=a+b;
    // printf("%d",c);
    
    sum(a,b);

    printf("%d\n",a); //10
    printf("\n");
    return 0;

}


// pass by value
void sum(int a,int b){
    
    int c=a+b;
    printf("%d\n",c);

}

