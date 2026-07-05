//q1
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};
struct Student students[100];
int count=0;
void addStudent() {
    if (count >= 100)
    {
        printf("Database is full");
        return;
    }
    printf("Enter Roll Number");
    scanf("%d",&students[count].roll);
    printf("Enter Name");
    scanf(" %s", students[count].name);
    printf("Enter Marks");
    scanf("%f", &students[count].marks);
    count++;
    printf("Student added successfully\n");
}
void displayStudents() {
    if (count==0) {
        printf("No student records found.\n");
        return;
    }
    printf("students records");
    printf("Roll\tName\t\tMarks\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\n",
               students[i].roll,
               students[i].name,
               students[i].marks);
    }
}
void searchStudent() {
    int roll;
    printf("Enter Roll Number to Search");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("\nStudent Found\n");
            printf("Roll : %d\n", students[i].roll);
            printf("Name : %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student not found!\n");
}
void updateStudent() {
    int roll;
    printf("Enter Roll Number to Update");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Enter New Name");
            scanf("%s", students[i].name);
            printf("Enter New Marks");
            scanf("%f", &students[i].marks);
            printf("Record updated successfully");
            return;
        }
    }
    printf("Student not found!\n");
}
void deleteStudent() {
    int roll;
    printf("Enter Roll Number to Delete");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}
int main() {
    int choice;
    do {
        printf("\n===== Student Data Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);
    return 0;
}