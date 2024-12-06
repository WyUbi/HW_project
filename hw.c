#include <stdio.h>

char getGrade(int score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int score;
    printf("Enter the score: ");
    scanf("%d", &score);

    char grade = getGrade(score);
    printf("The grade is: %c\n", grade);

    return 0;
}