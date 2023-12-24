#include<stdio.h>
int main()
{
    int n,val;
    printf("Enter n : ");
    scanf("%d",&n);
    int flag[n],arr[n],a[n][2];
    printf("Enter arr : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        flag[i]=0;
    }
    int index = 0,temp;
    for(int i=0;i<n;i++){
        val = 0;
        if(flag[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    val++;
                    flag[j]=1;
                }
            }
        }
        if(val>0){
            a[index][0] = arr[i];
            a[index][1] = val;
            index++;
        }
    }
    for(int i=0;i<index;i++){
        val = a[i][1];n=i;
        for(int j=i+1;j<index;j++){
            if(val>a[j][1]){
                val = a[j][1];
                n = j;
            }
        }
        temp = a[i][0];
        a[i][0] = a[n][0];
        a[n][0] = temp;
        temp = a[i][1];
        a[i][1] = a[n][1];
        a[n][1] = temp;
        printf("%d ",a[i][0]);
    }
    if(index==0)
        printf("-1");
    return 0;
}
