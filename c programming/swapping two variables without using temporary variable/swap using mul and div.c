#include<stdio.h>
int main(){
    int a,b;
    printf("enter value of a and b : ");
    scanf("%d%d",&a,&b);
    if(a==0){
        a=b;
        b=0;
    }
    else if(b==0){
        b=a;
        a=0;
    }
    else{
        a = a*b;
        b = a/b;
        a = a/b;
    }
    printf("a = %d b = %d",a,b);
    return 0;
}

