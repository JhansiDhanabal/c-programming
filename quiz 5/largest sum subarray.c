#include<stdio.h>
int main()
{
    int n, sum, i,ans, start, end,j=0;
    printf("enter n: ");
    scanf("%d",&n);
    int arr[n],array[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    start = 0;
    end = 0;
    while(end != n){
        if(start>end)
        {
            start = 0;
            end = end+1;
        }
        else{
            ans = 0;
            int *res;
            for(int i=start;i<=end;i++){
                ans+=arr[i];
            }
            if(ans > sum){
                sum = ans;
                j=0;
                for(int i=start ; i<=end ;i++){
                    array[j++]=arr[i];
                }
            }
            start += 1;
        }
    }
    printf("the subarray [");
    for(i=0;i<j;i++){
        printf("%d ",array[i]);
    }
    printf("] has the largest sum = %d", sum);
    return 0;
}
