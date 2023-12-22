#include<stdio.h>
#include<string.h>

int main()
{
    char sentence[100],str[100];
    int len, screen_length,difference,space=0,each,rem;

    printf("Sentence = ");
    gets(sentence);
    len = strlen(sentence);
    printf("Screen length = ");
    scanf("%d",&screen_length);
    for(int i=0;i<len;i++){
        if(sentence[i]==' ')
            space++;
    }
    difference = screen_length-(len-space);
    each = difference/space;
    rem = difference%space;
    int arr[space];
    for(int i=0;i<space;i++){
        arr[i] = each;
        if(rem>0)
        {
            arr[i]+=1;
            rem--;
        }
    }
    int j=0,index=0,k;
    for(int i=0;i<len;i++){
        if(sentence[i]==' ')
        {
            for(int k=0;k<arr[j];k++){
                str[index++] = '*';
            }
            j++;
        }
        else{
            str[index++] = sentence[i];
        }
    }
    str[index]='\0';
    printf("%s",str);
    return 0;
}
