#include<stdio.h>
#include<string.h>
int main()
{
    char string[10][4]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    char digits[10];
    int i,index,n=1;
    printf("enter digits = ");
    gets(digits);
    char str[strlen(digits)][4];
    for(i=0;i<strlen(digits);i++){
        strcpy(str[i],string[digits[i]-'0']);
        n*=strlen(str[i]);
    }
    char result[n][strlen(digits)+1];
    for (int i = 0; i < n; i++) {
        result[i][strlen(digits)] = '\0';
    }
    for (int i = 0; i < n; i++) {
        index = i;
        for (int j = strlen(digits) - 1; j >= 0; j--) {
            result[i][j] = str[j][index % strlen(str[j])];
            index /= strlen(str[j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("%s \n",result[i]);
    }
    return 0;
}
