/* swap two numbers*/
#include<stdio.h>
void swap_value(int,int);
void swap_reference(int*,int*);
int main()
{
    int a,b;
    printf("enter a and b : ");
    scanf("%d%d",&a,&b);
    swap_value(a,b);
    printf("a = %d b = %d\n",a,b);
    swap_reference(&a,&b);
    printf("a = %d b = %d\n",a,b);
}
void swap_value(int a,int b){
    int temp=a;
    a = b;
    b = temp;
    printf("a = %d b = %d\n",a,b);
}
void swap_reference(int* a,int* b){
    int temp=*a;
    *a = *b;
    *b = temp;
    printf("a = %d b = %d\n",*a,*b);
}
