//Write a program to Create library management system.
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int issued;
};

struct Book library[100];
int count = 0;

void addBook() {
    printf("Enter title: ");
    getchar();
    gets(library[count].title);
    printf("Enter author: ");
    gets(library[count].author);
    library[count].id = count + 1;
    library[count].issued = 0;
    count++;
    printf("Book added! ID: %d\n", library[count-1].id);
}

void displayBooks() {
    if (count == 0) {
        printf("No books.\n");
        return;
    }
    printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", 
               library[i].id, 
               library[i].title, 
               library[i].author,
               library[i].issued ? "Issued" : "Available");
    }
}

void issueBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].issued) {
                printf("Already issued.\n");
            } else {
                library[i].issued = 1;
                printf("Book issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

void returnBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].issued) {
                library[i].issued = 0;
                printf("Book returned.\n");
            } else {
                printf("Not issued.\n");
            }
            return;
        }
    }
    printf("Book not found.\n");
}

int main() {
    int choice;
    do {
        printf("\n1.Add 2.Display 3.Issue 4.Return 5.Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: printf("Goodbye!\n"); break;
            default: printf("Invalid!\n");
        }
    } while(choice != 5);
    return 0;
}