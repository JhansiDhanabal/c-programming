#include<stdio.h>
void main()
{
    int n,r;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter arr : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    r = arr[n-1]+1;
    if(r>9)
    {
        int a[n+1];
        for(int i=0;i<n;i++){
            a[i]=arr[i];
        }
        a[n]=0;
        r=n-1;
        while(arr[r]>8){
            a[r]=0;
            r = r-1;
        }
        if(r<0){
            r=0;
            n=n+1;
        }
        a[r]=a[r]+1;
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        arr[n-1] = r;
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }

}
