#include<stdio.h>
int main(){
    int n, year=0, week, days, rem, leap=0;
    printf("enter any Integer : ");
    scanf("%d",&n);
    for(int i=1;i*365+leap<=n;i++){
        if((i%4==0 && i%100!=0) || i%400==0){
            leap++;
        }
        year++;
    }

    rem = n-year*365-leap;
    week = rem/7;
    days = rem%7;
    printf("Number of Years:%d\nNumber of Week:%d\nNumber of Days:%d",year, week, days);

    return 0;
}
