#include<stdio.h>
#include<string.h>

int main()
{
    int lower=0, upper=0, special=0, digit=0, n;
    char str[20],ch;
    printf("enter password : ");
    scanf("%s", str);

    n = strlen(str);
    if(n<8)
        printf("password should be at least length of 8");
    else{
        for(int i=0;i<n;i++){
            ch = str[i];
            if(ch>='a' && ch<='z')
                lower++;
            else if(ch>='A' && ch<='Z')
                upper++;
            else if(ch>='0' && ch<='9')
                digit++;
            else if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^'|| ch=='&' || ch=='(' || ch==')' || ch=='-' || ch=='+')
                special++;
        }
        if(upper>0 && lower>0 && special>0 && digit>0)
            printf("Strong password");
        else
        {
            printf("password should contain atleast ");
            if(lower<1)
                printf("one lowercase, ");
            if(upper<1)
                printf("one uppercase, ");
            if(digit<1)
                printf("one digit, ");
            if(special<1)
                printf("one special character (!@#$%^&*-+) ");
            printf("\b\b.");
        }

    }
    return 0;
}










