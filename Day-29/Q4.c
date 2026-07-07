//Write a program to Create inventory management system.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice, count = 0, found, qty;
    char item[100][50], search[50];
    int price[100], stock[100];
    do
    {
        printf("\n===== INVENTORY MANAGEMENT =====\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item\n");
        printf("4. Update Stock\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                if(count == 100)
                {
                    printf("Inventory full!\n");
                    break;
                }
                printf("Enter item name: ");
                scanf("%s", item[count]);
                printf("Enter price: ");
                scanf("%d", &price[count]);
                printf("Enter stock quantity: ");
                scanf("%d", &stock[count]);
                count++;
                printf("Item added!\n");
                break;
            case 2:
                if(count == 0)
                {
                    printf("No items in inventory.\n");
                    break;
                }
                printf("\n--- INVENTORY ---\n");
                for(int i = 0; i < count; i++)
                    printf("%d. %s | Price: %d | Stock: %d\n", i + 1, item[i], price[i], stock[i]);
                break;
            case 3:
                printf("Enter item name to search: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(item[i], search) == 0)
                    {
                        printf("Item: %s | Price: %d | Stock: %d\n", item[i], price[i], stock[i]);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Item not found!\n");
                break;
            case 4:
                printf("Enter item name to update: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(item[i], search) == 0)
                    {
                        printf("Enter new stock quantity: ");
                        scanf("%d", &qty);
                        stock[i] = qty;
                        printf("Stock updated!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Item not found!\n");
                break;
            case 5:
                printf("Enter item name to delete: ");
                scanf("%s", search);
                found = 0;
                for(int i = 0; i < count; i++)
                {
                    if(strcmp(item[i], search) == 0)
                    {
                        for(int j = i; j < count - 1; j++)
                        {
                            strcpy(item[j], item[j + 1]);
                            price[j] = price[j + 1];
                            stock[j] = stock[j + 1];
                        }
                        count--;
                        printf("Item deleted!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Item not found!\n");
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
