#include <stdio.h>

void printChars(void);
int main(){

printChars();


}
void printChars(void){
    char outer = 'A';
    while ( outer <= 'Z'){
        char inner = 'A';
        while (inner <= 'Z'){
            if (outer != inner){
                printf("%c%c\n", outer , inner);
                }
            inner++;
        }
        outer++;

    }
}