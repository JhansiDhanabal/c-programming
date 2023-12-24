#include<stdio.h>
int main()
{
    int n,x,first = -1, last = -1;
    printf("N = ");
    scanf("%d",&n);
    printf("X = ");
    scanf("%d",&x);
    int arr[n];
    printf("Arr[] = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(first==-1 && arr[i]==x){
            first = i;
            last = i;
        }
        else if(arr[i]==x)
            last = i;
    }
    if(first == -1)
        printf("-1");
    else
        printf("%d %d",first, last);
    return 0;
}
