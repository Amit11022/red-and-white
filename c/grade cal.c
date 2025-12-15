#include <stdio.h>

int main() {
    int marks;

    // input from user to enter marks
    printf("Enter your marks: ");
    scanf("%d", &marks); // read marks from user

    // Check grade using else-if ladder
    if (marks >= 95) {                                // 95 to 100
        printf("Grade: A");
    }
    else if (marks >= 80 && marks < 95) {             // 80 to 94
        printf("Grade: B");
    }
    else if (marks >= 60 && marks < 80) {             // 60 to 79
        printf("Grade: C");
    }
    else if (marks >= 45 && marks < 60) {             // 45 to 59
        printf("Grade: D");
    }
    else if (marks >= 35 && marks < 45) {             // 35 to 44
        printf("Grade: E");
    }
    else if (marks >= 0 && marks < 35) {              // 0 to 34
        printf("Grade: FAIL");
    }

}

