/* check two strings anagram or not*/
#include<stdio.h>
#include<string.h>
int anagram(char*, char*);
int main()
{
    char s[20], t[20];
    printf("Enter s = ");
    gets(s);
    printf("Enter t = ");
    gets(t);
    if(anagram(s,t))
        printf("true");
    else
        printf("false");
    return 0;
}
int anagram(char *s, char*t)
{
    if(strlen(s)!=strlen(t))
        return 0;
    static int alpha[26];
    for(int i=0;i<strlen(s);i++){
        alpha[*(s+i)-'a']+=1;
        alpha[*(t+i)-'a']-=1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]!=0)
            return 0;
    }
    return 1;
}
