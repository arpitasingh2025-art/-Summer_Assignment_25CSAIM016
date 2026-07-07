//Write a program to Create ticket booking system.
#include<stdio.h>
#include<string.h>
int main()
{
    int choice, seat, booked[50] = {0}, total = 0;
    char name[50][50], temp[50];
    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Show Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Booking\n");
        printf("4. Show Booked Seats\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nAvailable Seats: ");
                for(int i = 0; i < 50; i++)
                {
                    if(booked[i] == 0)
                        printf("%d ", i + 1);
                }
                printf("\n");
                break;
            case 2:
                if(total == 50)
                {
                    printf("All seats are booked!\n");
                    break;
                }
                printf("Enter seat number: ");
                scanf("%d", &seat);
                if(seat < 1 || seat > 50)
                {
                    printf("Invalid seat number!\n");
                    break;
                }
                if(booked[seat - 1] == 1)
                {
                    printf("Seat already booked!\n");
                    break;
                }
                printf("Enter your name: ");
                scanf("%s", temp);
                booked[seat - 1] = 1;
                strcpy(name[seat - 1], temp);
                total++;
                printf("Seat %d booked successfully for %s!\n", seat, temp);
                break;
            case 3:
                printf("Enter seat number to cancel: ");
                scanf("%d", &seat);
                if(seat < 1 || seat > 50 || booked[seat - 1] == 0)
                {
                    printf("Seat not booked!\n");
                    break;
                }
                booked[seat - 1] = 0;
                strcpy(name[seat - 1], "");
                total--;
                printf("Booking for seat %d cancelled!\n", seat);
                break;
            case 4:
                if(total == 0)
                {
                    printf("No seats booked yet.\n");
                    break;
                }
                printf("\nBooked Seats:\n");
                for(int i = 0; i < 50; i++)
                {
                    if(booked[i] == 1)
                        printf("Seat %d -> %s\n", i + 1, name[i]);
                }
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
