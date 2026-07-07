//Write a program to Create contact management system.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice, count = 0, found;
    char name[100][50], phone[100][15], search[50];
    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(count == 100)
                {
                    printf("Contact list is full!\n");
                    break;
                }
                printf("Enter name: ");
                scanf("%s", name[count]);
                printf("Enter phone number: ");
                scanf("%s", phone[count]);
                count++;
                printf("Contact added successfully!\n");
                break;
            case 2:
                if(count == 0)
                {
                    printf("No contacts saved.\n");
                    break;
                }
                printf("\n--- All Contacts ---\n");
                for(int i = 0; i < count; i++)
                {
                    printf("%d. %s -> %s\n", i + 1, name[i], phone[i]);
                }
                break;
            case 3:
                if(count == 0)
                {
                    printf("No contacts to search.\n");
                    break;
                }
                printf("Enter name to search: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        printf("Found: %s -> %s\n", name[i], phone[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Contact not found!\n");
                break;
            case 4:
                if(count == 0)
                {
                    printf("No contacts to delete.\n");
                    break;
                }
                printf("Enter name to delete: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(name[i], search) == 0)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            strcpy(name[j], name[j + 1]);
                            strcpy(phone[j], phone[j + 1]);
                        }
                        count--;
                        found = 1;
                        printf("Contact deleted successfully!\n");
                        break;
                    }
                }
                if(found == 0)
                    printf("Contact not found!\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    while(choice != 5);
    return 0;
}
