#include<stdio.h>

int main() {
    int age = 1;
    int year_to_minutes = 525600;
    puts("Enter your age in years");
    scanf("%d",&age);
    int years_in_minutes = age * year_to_minutes;

    printf("your \"age in minutes\" is %d\n",years_in_minutes);


    return 0;
}