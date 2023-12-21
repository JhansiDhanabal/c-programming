#include<stdio.h>
int main()
{
    int degree, i, x, ans=0;
    int coefficients[degree+1];
    printf("Enter the degree of the polynomial : ");
    scanf("%d",&degree);
    for(i=degree;i>=0;i--){
        printf("enter coefficient a%d: ",i);
        scanf("%d",&coefficients[i]);
    }
    printf("enter the value of x:");
    scanf("%d",&x);

    for(i=0;i<=degree;i++){
        ans+= coefficients[i]*(int)pow(x,i);
    }
    printf("P(%d) = %d",x,ans);
}
