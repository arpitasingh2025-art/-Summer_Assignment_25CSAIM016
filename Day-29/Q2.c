//Write a program to Create menu-driven array operations system.
#include<stdio.h>
int main()
{
    int choice, n, a[100], pos, val, found;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    do
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Reverse Array\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Array: ");
                for(int i = 0; i < n; i++)
                    printf("%d ", a[i]);
                printf("\n");
                break;
            case 2:
                printf("Enter position and value: ");
                scanf("%d %d", &pos, &val);
                if(pos < 1 || pos > n + 1)
                {
                    printf("Invalid position!\n");
                    break;
                }
                for(int i = n; i >= pos; i--)
                    a[i] = a[i - 1];
                a[pos - 1] = val;
                n++;
                printf("Element inserted!\n");
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if(pos < 1 || pos > n)
                {
                    printf("Invalid position!\n");
                    break;
                }
                for(int i = pos - 1; i < n - 1; i++)
                    a[i] = a[i + 1];
                n--;
                printf("Element deleted!\n");
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &val);
                found = 0;
                for(int i = 0; i < n; i++)
                {
                    if(a[i] == val)
                    {
                        printf("Found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Not found!\n");
                break;
            case 5:
                for(int i = 0; i < n / 2; i++)
                {
                    int temp = a[i];
                    a[i] = a[n - 1 - i];
                    a[n - 1 - i] = temp;
                }
                printf("Array reversed!\n");
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
