#include<stdio.h>
#include<limits.h>
int main()
{
    int n,count,duplicate;
    printf("N = ");
    scanf("%d",&n);
    int arr[n];
    printf("Array = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nOutput:\n");
    for(int i=0;i<n;i++){
        count = 1;
        if(arr[i]!=INT_MIN){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j] = INT_MIN;
                }
            }
            if(count>1){
                printf("%d->%d ",arr[i],count);
            }
        }
    }
    return 0;
}
