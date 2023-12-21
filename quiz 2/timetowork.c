#include<stdio.h>

int main(){
    int total_hrs, no_of_days, no_of_workers, working_hrs;
    printf("enter total number of hours, number of days, number of workers : ");
    scanf("%d%d%d",&total_hrs, &no_of_days, &no_of_workers);

    no_of_days = 0.9*no_of_days;
    working_hrs = no_of_days*10*no_of_workers;

    if(working_hrs >= total_hrs)
        printf("Yes! %.0f hrs left",floor(working_hrs-total_hrs));
    else
        printf("Not enough time!%.0f hours needed",floor(total_hrs-working_hrs));
}
