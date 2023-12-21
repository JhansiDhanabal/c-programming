#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter value of num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    if(num1 == 0){
        num1 = num2;
        num2 = 0;
    }
    else if(num2 == 0){
        num2 = num1;
        num1 = 0;
    }
    else{
        num1= num1*num2;
        num2 = num1/num2;
        num1 = num1/num2;
    }
    printf("num1 = %d\nnum2 = %d",num1,num2);
    return 0;
}
