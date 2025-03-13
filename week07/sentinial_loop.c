#include <stdio.h>

double avgStudentGradesSentinel(void);
double getGrade(void);

// TODO don't count -1 as a grade
// TODO don't divide by 0
// get the grade 

int main(void) {
    printf("%.2lf", avgStudentGradesSentinel());


    return 0;
}

double avgStudentGradesSentinel(void) {

    double grade = 0;
    double total_grade = 0;
    int n_grades= 0;

    while (grade != -1) { // sentinel value = -1
        printf("Enter the grade: ");
        scanf("%lf", &grade);

        if (grade >=0) {
            total_grade += grade;
            n_grades++;
    }
    }
if (n_grades == 0) {
    puts("no grades were entered.");
    return 0;
}
        
        return total_grade/n_grades;



getGrade();
}
double getGrade(void) {
    // Return only grades in the range(-1 to 100)
    double grade;
    // do while loop
    do {
        printf("Enter the grade:");
        scanf("%lf", &grade);
        if (grade < -1 || grade >100) {
            puts("incorrect grade: Try again");
        }
    } while ( grade < -1 || grade >100);
    
    return grade;
}