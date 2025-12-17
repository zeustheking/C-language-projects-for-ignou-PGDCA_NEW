#include <stdio.h>
#include <math.h>

int main() {
    float marks;
    printf("Enter obtained marks: ");
    scanf("%f", &marks);

    if (marks < 0 || marks > 100){
        printf("Enter Correct Number\n");
    }
        else if(marks < 30){
        printf("Grade is C\n");
    }
        else if(marks < 70){
        printf("Grade is B\n");
    }
        else if(marks < 90){
        printf("Grade is A\n");
    }
        else if(marks < 100){
        printf("Grade is A+\n");
    }
    
    
    return 0;
}