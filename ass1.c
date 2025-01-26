#include <stdio.h>

int main() {
    int score;
    
    // Prompting the user to input  score
    printf("please input the student score (0-100): ");
    scanf("%d", &score);

    // checking the range and inputing the equal score
    if (score >= 70 && score <= 100) {
        printf("Grade: A\n");
    } else if (score >= 60 && score < 70) {
        printf("Grade: B\n");
    } else if (score >= 50 && score < 60) {
        printf("Grade: C\n");
    } else if (score >= 40 && score < 50) {
        printf("Grade: D\n");
    } else if (score >= 0 && score < 40) {
        printf("Grade: F\n");
    } else {
        printf("Score not invalid!!!, ensure you enter a score from 0 and 100.\n");
    }

    return 0;
}