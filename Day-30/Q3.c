//Write a program to Create mini employee management system.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice, count = 0, found;
    char name[100][50], dept[100][50], search[50];
    int id[100], salary[100];
    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search by ID\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(count == 100)
                {
                    printf("Database full!\n");
                    break;
                }
                printf("Enter name: ");
                scanf("%s", name[count]);
                printf("Enter ID: ");
                scanf("%d", &id[count]);
                printf("Enter department: ");
                scanf("%s", dept[count]);
                printf("Enter salary: ");
                scanf("%d", &salary[count]);
                count++;
                printf("Employee added!\n");
                break;
            case 2:
                if(count == 0)
                {
                    printf("No employees.\n");
                    break;
                }
                printf("\n--- EMPLOYEES ---\n");
                for(int i = 0; i < count; i++)
                    printf("ID: %d | Name: %s | Dept: %s | Salary: %d\n", id[i], name[i], dept[i], salary[i]);
                break;
            case 3:
                printf("Enter employee ID: ");
                scanf("%d", &found);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(id[i] == found)
                    {
                        printf("ID: %d | Name: %s | Dept: %s | Salary: %d\n", id[i], name[i], dept[i], salary[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found!\n");
                break;
            case 4:
                printf("Enter employee ID: ");
                scanf("%d", &found);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(id[i] == found)
                    {
                        printf("Enter new salary: ");
                        scanf("%d", &salary[i]);
                        printf("Salary updated!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found!\n");
                break;
            case 5:
                printf("Enter employee ID: ");
                scanf("%d", &found);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(id[i] == found)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            strcpy(name[j], name[j + 1]);
                            id[j] = id[j + 1];
                            strcpy(dept[j], dept[j + 1]);
                            salary[j] = salary[j + 1];
                        }
                        count--;
                        printf("Employee deleted!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Employee not found!\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    while(choice != 6);
    return 0;
}
