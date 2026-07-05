//q3
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, pf, netSalary;
};
struct Employee emp[100];
int count = 0;
void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);
    printf("Enter Employee Name: ");
    scanf("%s", emp[count].name);
    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basic);
    printf("Enter HRA: ");
    scanf("%f", &emp[count].hra);
    printf("Enter DA: ");
    scanf("%f", &emp[count].da);
    printf("Enter PF: ");
    scanf("%f", &emp[count].pf);
    emp[count].netSalary = emp[count].basic + emp[count].hra +
                           emp[count].da - emp[count].pf;
    count++;
    printf("\nEmployee Added Successfully!\n");
}
void displayEmployees() {
    if (count == 0) {
        printf("\nNo Employee Records Found!\n");
        return;
    }
    printf("ID\tName\tBasic\tHRA\tDA\tPF\tNet Salary\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basic,
               emp[i].hra,
               emp[i].da,
               emp[i].pf,
               emp[i].netSalary);
    }
}
void searchEmployee() {
    int id, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Basic Salary: %.2f\n", emp[i].basic);
            printf("HRA: %.2f\n", emp[i].hra);
            printf("DA: %.2f\n", emp[i].da);
            printf("PF: %.2f\n", emp[i].pf);
            printf("Net Salary: %.2f\n", emp[i].netSalary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nEmployee Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n========== Salary Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("\nThank You!\n");
                break;
            default:
                printf("\nInvalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}