#include<stdio.h>
int main()
{
    int n,jump,pos = 0;
    printf("enter n: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    jump=0;
    for(int i=0;i<n;i++)
    {
        if(i > jump)
        {
            pos = 1;
            break;
        }
        jump = fmax(jump, i+arr[i]);
    }
    if(pos==0 && jump >= n-1)
        printf("true");
    else
        printf("false");
    return 0;
}
