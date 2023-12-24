#include<stdio.h>
int main()
{
    int n,temp,first=-1,second=-1;
    printf("N = ");
    scanf("%d",&n);
    int arr[n];
    printf("Arr[] = ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(first<arr[i]){
            second = first;
            first = arr[i];
        }
        else if(first!=arr[i] && second < arr[i]){
            second = arr[i];
        }
    }
    printf("The largest element of the array is %d and the second largest element is %d\n\n",first, second);
    for(int i=0;i<n;i++){
        first = arr[i];
        second = i;
        for(int j=i+1;j<n;j++){
            if(first < arr[j]){
                first = arr[j];
                second = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[second];
        arr[second] = temp;
    }
    temp = 0;
    while(temp<n && arr[temp]==arr[temp+1]){
        temp++;
    }
    printf("The largest element of the array is %d and the second largest element is %d",arr[temp], temp+1<n?arr[temp+1]:arr[temp]);

    return 0;
}
