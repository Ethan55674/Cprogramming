#include <stdio.h>

// for a for loop you need all 3 things needed for a while loop example for (counter = 1 , counter <= 10, ++counter)
// 
int x;
int i;
int t;
int main() {
    char input;
    char secondInput;
    do {
        printf("enter an uppercase character:");
        scanf("%c", &input);
    } while (input < 'A' || input > 'Z');

    // get the positive integer
    do {
        printf("enter a positive number;");
        scanf("%d",&t);
    } while (t <0);
    do {
        printf("enter * or #:");
        scanf("%c", &secondInput);
    } while (secondInput != '#' || secondInput != '*');
    // print the scanned char the integer number of times
    // example A 5 = AAAA
    for (t;  t > 0; t-- ) {
        printf("%c", input);
    }
    // scan a second character which should be either * or # and nothing else
    // print the pattern
    // B 5 *
    //B*B*B*B*B
    // advanced pattern B**BB**BB*



    return 0;
}