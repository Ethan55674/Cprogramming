#include <stdio.h>
void printTriangleTopLeftStars(int size);
void printTriangleBottomLeftStars(int size);
int main() {

int n = 0;
do {
    printf("Enter a positive integer:");
    scanf("%d", &n);
} while (n<=0);

int i = 1;
while (i <100){
    printTriangleTopLeftStars(n);
    printTriangleBottomLeftStars(n);
    i++;
}




}
void printTriangleTopLeftStars(int size) {
    for (int i = 0; i<size; i++){
        for (int j = 0; j< size - i; j++){
            printf("%c",'*');
        }
        puts("");
    }


}
void printTriangleBottomLeftStars(int size) {
    for (int i = 0; i<size; i++){
        for (int j = 0; j <= i; j++){
            printf("%c",'*');
        }
        puts("");
    }}