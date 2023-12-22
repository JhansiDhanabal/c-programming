#include<stdio.h>
int main()
{
    int n,j,i=1,k,l=1,rem=0,row;
    printf("enter number of rows : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(j=n-row;j>=1;j--){
            printf("  ");
        }
        j = i;
        for(k=n-row;k<n;k++){
            printf("%d ",j);
            j+=2;
        }
        if(rem < 2){
            i = i+l;
            rem++;
        }
        else{
            l += 2;
            i = i+l;
            rem=1;
        }
        printf("\n");
    }
    return 0;
}
