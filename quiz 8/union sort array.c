#include<stdio.h>
int main()
{
    int n,m,i,j,index;

    printf("Enter n : ");
    scanf("%d",&n);
    int arr1[n];
    printf("arr1[] = ");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter m : ");
    scanf("%d",&m);
    int arr2[m];
    printf("arr2[] = ");
    for(i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    int arr[n+m];
    index = 0;
    i = 0;
    j = 0;
    if(arr1[0]<arr2[0]){
        arr[index++]=arr1[0];
        i=1;
    }
    else if(arr1[0]==arr2[0]){
        arr[index++]=arr1[0];
        i=1;
        j=1;
    }
    else{
        arr[index++]=arr2[0];
        j=1;
    }

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            if(arr[index-1]!=arr1[i])
                arr[index++] = arr1[i];
            i++;
        }
        else if(arr1[i]==arr2[j]){
            if(arr[index-1]!=arr1[i])
                arr[index++] = arr1[i];
            i++;
            j++;
        }
        else{
            if(arr[index-1]!=arr2[j])
                arr[index++] = arr2[j];
            j++;
        }
    }

    while(j<m){
        arr[index++] = arr2[j];
        j++;
    }
    while(i<n){
        arr[index++] = arr1[i];
        i++;
    }
    for(i=0;i<index;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}







