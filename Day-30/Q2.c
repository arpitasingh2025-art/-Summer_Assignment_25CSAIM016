//Write a program to Create mini library system.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice, count = 0, found;
    char title[100][50], author[100][50], search[50];
    int avail[100];
    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(count == 100)
                {
                    printf("Library full!\n");
                    break;
                }
                printf("Enter title: ");
                scanf("%s", title[count]);
                printf("Enter author: ");
                scanf("%s", author[count]);
                avail[count] = 1;
                count++;
                printf("Book added!\n");
                break;
            case 2:
                if(count == 0)
                {
                    printf("No books.\n");
                    break;
                }
                printf("\n--- BOOKS ---\n");
                for(int i = 0; i < count; i++)
                {
                    printf("%d. %s by %s ", i + 1, title[i], author[i]);
                    if(avail[i])
                        printf("[Available]\n");
                    else
                        printf("[Issued]\n");
                }
                break;
            case 3:
                printf("Enter book title to issue: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(title[i], search) == 0)
                    {
                        if(avail[i])
                        {
                            avail[i] = 0;
                            printf("Book issued!\n");
                        }
                        else
                            printf("Already issued!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found!\n");
                break;
            case 4:
                printf("Enter book title to return: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(title[i], search) == 0)
                    {
                        if(!avail[i])
                        {
                            avail[i] = 1;
                            printf("Book returned!\n");
                        }
                        else
                            printf("Book was not issued!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found!\n");
                break;
            case 5:
                printf("Enter title to search: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(title[i], search) == 0)
                    {
                        printf("%s by %s ", title[i], author[i]);
                        if(avail[i])
                            printf("[Available]\n");
                        else
                            printf("[Issued]\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Book not found!\n");
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
