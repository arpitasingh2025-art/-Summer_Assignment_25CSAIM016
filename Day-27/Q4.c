//q4
#include <stdio.h>

int main() {
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("Marksheet Generation System \n");
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Marks of 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);
    printf("Subject 2: ");
    scanf("%f", &m2);
    printf("Subject 3: ");
    scanf("%f", &m3);
    printf("Subject 4: ");
    scanf("%f", &m4);
    printf("Subject 5: ");
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("STUDENT MARKSHEET\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("\nMarks Obtained:\n");
    printf("Subject 1 : %.2f\n", m1);
    printf("Subject 2 : %.2f\n", m2);
    printf("Subject 3 : %.2f\n", m3);
    printf("Subject 4 : %.2f\n", m4);
    printf("Subject 5 : %.2f\n", m5);
    printf("Total      : %.2f / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33) {
        printf("Result     : FAIL\n");
    } else {
        printf("Result     : PASS\n");
        if (percentage >= 60)
            printf("Division   : First Division\n");
        else if (percentage >= 45)
            printf("Division   : Second Division\n");
        else if (percentage >= 33)
            printf("Division   : Third Division\n");
    }
    return 0;
}