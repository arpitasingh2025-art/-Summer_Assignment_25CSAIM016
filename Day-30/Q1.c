//Write a program to Create student record system using arrays and strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice, count = 0, found;
    char name[100][50], search[50];
    int roll[100], marks[100];
    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search by Roll Number\n");
        printf("4. Search by Name\n");
        printf("5. Delete Student\n");
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
                printf("Enter roll number: ");
                scanf("%d", &roll[count]);
                printf("Enter marks: ");
                scanf("%d", &marks[count]);
                count++;
                printf("Student added!\n");
                break;
            case 2:
                if(count == 0)
                {
                    printf("No students.\n");
                    break;
                }
                printf("\n--- STUDENT LIST ---\n");
                for(int i = 0; i < count; i++)
                    printf("Roll: %d | Name: %s | Marks: %d\n", roll[i], name[i], marks[i]);
                break;
            case 3:
                printf("Enter roll number: ");
                scanf("%d", &found);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(roll[i] == found)
                    {
                        printf("Roll: %d | Name: %s | Marks: %d\n", roll[i], name[i], marks[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student not found!\n");
                break;
            case 4:
                printf("Enter name: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        printf("Roll: %d | Name: %s | Marks: %d\n", roll[i], name[i], marks[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student not found!\n");
                break;
            case 5:
                printf("Enter roll number to delete: ");
                scanf("%d", &found);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(roll[i] == found)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            strcpy(name[j], name[j + 1]);
                            roll[j] = roll[j + 1];
                            marks[j] = marks[j + 1];
                        }
                        count--;
                        printf("Student deleted!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Student not found!\n");
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
