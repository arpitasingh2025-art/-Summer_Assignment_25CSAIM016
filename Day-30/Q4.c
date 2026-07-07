//Write a program to Develop complete mini project using arrays, strings and functions.
#include<stdio.h>
#include<string.h>

char names[100][50];
int ids[100], marks[100], fees[100];
int total = 0;

void addStudent()
{
    if(total == 100)
    {
        printf("Database full!\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", names[total]);
    printf("Enter ID: ");
    scanf("%d", &ids[total]);
    printf("Enter marks: ");
    scanf("%d", &marks[total]);
    printf("Enter fees: ");
    scanf("%d", &fees[total]);
    total++;
    printf("Student added!\n");
}

void displayAll()
{
    if(total == 0)
    {
        printf("No students.\n");
        return;
    }
    printf("\n--- ALL STUDENTS ---\n");
    for(int i = 0; i < total; i++)
        printf("ID: %d | Name: %s | Marks: %d | Fees: %d\n", ids[i], names[i], marks[i], fees[i]);
}

void searchByName()
{
    char search[50];
    printf("Enter name: ");
    scanf("%s", search);
    for(int i = 0; i < total; i++)
    {
        if(strcmp(names[i], search) == 0)
        {
            printf("ID: %d | Name: %s | Marks: %d | Fees: %d\n", ids[i], names[i], marks[i], fees[i]);
            return;
        }
    }
    printf("Not found!\n");
}

void searchByID()
{
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    for(int i = 0; i < total; i++)
    {
        if(ids[i] == id)
        {
            printf("ID: %d | Name: %s | Marks: %d | Fees: %d\n", ids[i], names[i], marks[i], fees[i]);
            return;
        }
    }
    printf("Not found!\n");
}

void deleteStudent()
{
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    for(int i = 0; i < total; i++)
    {
        if(ids[i] == id)
        {
            for(int j = i; j < total - 1; j++)
            {
                strcpy(names[j], names[j + 1]);
                ids[j] = ids[j + 1];
                marks[j] = marks[j + 1];
                fees[j] = fees[j + 1];
            }
            total--;
            printf("Deleted!\n");
            return;
        }
    }
    printf("Not found!\n");
}

void updateMarks()
{
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    for(int i = 0; i < total; i++)
    {
        if(ids[i] == id)
        {
            printf("Enter new marks: ");
            scanf("%d", &marks[i]);
            printf("Marks updated!\n");
            return;
        }
    }
    printf("Not found!\n");
}

void topStudent()
{
    if(total == 0)
    {
        printf("No students.\n");
        return;
    }
    int top = 0;
    for(int i = 1; i < total; i++)
    {
        if(marks[i] > marks[top])
            top = i;
    }
    printf("Top: %s (ID: %d, Marks: %d)\n", names[top], ids[top], marks[top]);
}

void aboveAverage()
{
    if(total == 0)
    {
        printf("No students.\n");
        return;
    }
    int sum = 0;
    for(int i = 0; i < total; i++)
        sum = sum + marks[i];
    int avg = sum / total;
    printf("Average: %d\n", avg);
    printf("Students above average:\n");
    for(int i = 0; i < total; i++)
    {
        if(marks[i] > avg)
            printf("%s (ID: %d, Marks: %d)\n", names[i], ids[i], marks[i]);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n===== COLLEGE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search by Name\n");
        printf("4. Search by ID\n");
        printf("5. Delete Student\n");
        printf("6. Update Marks\n");
        printf("7. Top Student\n");
        printf("8. Above Average Students\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchByName(); break;
            case 4: searchByID(); break;
            case 5: deleteStudent(); break;
            case 6: updateMarks(); break;
            case 7: topStudent(); break;
            case 8: aboveAverage(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    }
    while(choice != 9);
    return 0;
}
