/*

getting the input from the keyboard

*/
#include <stdio.h>

int main() {
    int square_side = 1;
    int square_perimeter = 0;
    int square_area = 0;
    
    //write the prompt
    puts("Enter the side of a square");

    //get the input

    scanf("%d", &square_side);

    // do the math
    // & is an address operator
    square_perimeter = square_side *4;

    //create the output

    printf("the perimeter of the square with side %d is %d\n",square_side, square_perimeter);



    
    return 0;
}