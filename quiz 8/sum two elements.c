#include<stdio.h>
int main()
{
    int n,x;
    printf("N = ");
    scanf("%d",&n);
    printf("X = ");
    scanf("%d",&x);
    printf("Arr[] = ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
