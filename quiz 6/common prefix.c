/* find the longest common prefix string amongst an array of strings.*/
#include<stdio.h>
int main()
{
    int n,flag=0,min=20;
    printf("enter number of strings : ");
    scanf("%d",&n);
    char str[n][20],ch[20]="",dummy;
    for(int i=0;i<n;i++){
        scanf("%s",str[i]);
        min = fmin(min, strlen(str[i]));
    }
    for(int i=0;i<min && flag==0;i++){
        dummy = str[0][i];
        for(int j=1;j<n && flag==0;j++){
            if(dummy != str[j][i])
                flag=1;
        }
        if(flag==0)
            strncat(ch,&dummy,1);
    }
    printf("%s",ch);
    return 0;
}
