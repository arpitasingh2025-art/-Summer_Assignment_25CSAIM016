//Q2
#include <stdio.h>
#include <string.h>

struct emp {
    int empid;
    char name[50];
    float salary;
};
struct emp employee[100];
int count=0;
void addemployee() {
    if (count >= 100)
    {
        printf("Database is full");
        return;
    }
    printf("Enter Empid Number");
    scanf("%d",&employee[count].empid);
    printf("Enter Name");
    scanf(" %s", employee[count].name);
    printf("Enter salary");
    scanf("%f", &employee[count].salary);
    count++;
    printf("Employee added successfully\n");
}
void displayemployee() {
    if (count==0) {
        printf("No employee records found.\n");
        return;
    }
    printf("employee records");
    printf("Empid\tName\t\tSalary\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%-15s%.2f\n",
               employee[i].empid,
               employee[i].name,
               employee[i].salary);
    }
}
void searchemployee() {
    int empid;
    printf("Enter Empid to Search");
    scanf("%d", &empid);
    for (int i = 0; i < count; i++) {
        if (employee[i].empid == empid) {
            printf("\nEmployee Found\n");
            printf("Empid : %d\n", employee[i].empid);
            printf("Name : %s\n", employee[i].name);
            printf("Salary : %.2f\n", employee[i].salary);
            return;
        }
    }
    printf("Employee not found!\n");
}
void updateemployee() {
    int empid;
    printf("Enter Empid to Update");
    scanf("%d", &empid);
    for (int i = 0; i < count; i++) {
        if (employee[i].empid == empid) {
            printf("Enter New Name");
            scanf("%s", employee[i].name);
            printf("Enter New Salary");
            scanf("%f", &employee[i].salary);
            printf("Record updated successfully");
            return;
        }
    }
    printf("Employee not found!\n");
}
void deleteemployee() {
    int empid;
    printf("Enter Empid to Delete");
    scanf("%d", &empid);
    for (int i = 0; i < count; i++) {
        if (employee[i].empid == empid) {
            for (int j = i; j < count - 1; j++) {
                employee[j] = employee[j + 1];
            }
            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("Employee not found!\n");
}
int main() {
    int choice;
    do {
        printf("\n===== EMPLOYEE Data Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Search Employeet\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addemployee();
                break;
            case 2:
                displayemployee();
                break;
            case 3:
                searchemployee();
                break;
            case 4:
                updateemployee();
                break;
            case 5:
                deleteemployee();
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