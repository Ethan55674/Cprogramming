#include <stdio.h>

// rand op fo {-7,23}
//n = rand()%(31)-7 add both values add one and minus it by bottom value

//split the given 2 digit integer into tens and ones
// return 0 if the number is 2 digits 1 - otherwise
int splitDigits(int n, int *tens_ptr, int *ones_ptr);
void sumAndAvg(double d1, double d2, double *sum, double *avg);

int main(void){
    int n = 0;
    printf("Enter a two digit number:");
    scanf("%d",&n);

    int tens = 0, ones = 0;
    splitDigits(n,&tens, &ones);

    printf("%d has %d tens and %d ones",n,tens,ones);










    return 0;
}
int splitDigits(int n , int *tens_ptr, int *ones_ptr){
    if (n < 10 || n > 99){
        puts("Not a 2 digit number");
        return 1;
    }   
    *tens_ptr = n/10;
    *ones_ptr = n % 10;
    return 0; // everything is amazing!!
}
void sumAndAvg(double d1, double d2, double *sum, double *avg){
    int sum = 0; // sum of ones and tens
    int avg = 0; // average of ones and tens
    //sumAndAvg((double) tens,(double) ones, &sum, &avg);
    //printf("The sum %d;\nThe average &d\n", sum, avg);
}