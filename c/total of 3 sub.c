#include <stdio.h>

int main() {
    int math, eng, sci;
    float avg;

    // Taking input for all 3 subjects
    printf("Enter Maths marks: ");
    scanf("%d", &math);

    printf("Enter English marks: ");
    scanf("%d", &eng);

    printf("Enter Science marks: ");
    scanf("%d", &sci);

    // Calculate average
    avg = (math + eng + sci) / 3.0;

    // Display average
    printf("Average Marks = %.2f\n", avg);

    // Grade checking using else-if ladder
    if (avg >= 95) {                                // 95 to 100
        printf("Grade: A");
    }
    else if (avg >= 80 && avg < 95) {               // 80 to 94
        printf("Grade: B");
    }
    else if (avg >= 60 && avg < 80) {               // 60 to 79
        printf("Grade: C");
    }
    else if (avg >= 45 && avg < 60) {               // 45 to 59
        printf("Grade: D");
    }
    else if (avg >= 35 && avg < 45) {               // 35 to 44
        printf("Grade: E");
    }
    else if (avg >= 0 && avg < 35) {                // 0 to 34
        printf("Grade: FAIL");
    }

}

