#include<stdio.h>
int main()
{
    char str[100],ch;
    int num;
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a' && str[i]<='z')
            ch=str[i];
        else{
            num=0;
            while(str[i]>='0' && str[i]<='9'){
                num = num*10+(str[i]-'0');
                i++;
            }
            i--;
            for(int j=0;j<num;j++){
                printf("%c",ch);
            }
        }
    }
    return 0;
}
