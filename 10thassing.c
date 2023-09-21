#include<stdio.h>
int main()
{
    int Day ,Month,Year;
    printf("Enter Day Month and Year\n");
    scanf (" %d/%d/%d " ,&Day,&Month,&Year);
    printf("Day=%d, Month=%d , Year=%d" , Day , Month , Year);
    return 0;
}