//Write a program to Create bank account system.
#include <stdio.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

struct Account bank[100];
int count = 0;

void createAccount() {
    printf("Enter account number: ");
    scanf("%d", &bank[count].accNo);
    printf("Enter name: ");
    getchar();
    gets(bank[count].name);
    bank[count].balance = 0;
    count++;
    printf("Account created successfully!\n");
}

void depositMoney() {
    int accNo;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < count; i++) {
        if (bank[i].accNo == accNo) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            bank[i].balance += amount;
            printf("Deposited successfully! New balance: %.2f\n", bank[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void withdrawMoney() {
    int accNo;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < count; i++) {
        if (bank[i].accNo == accNo) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > bank[i].balance) {
                printf("Insufficient balance!\n");
            } else {
                bank[i].balance -= amount;
                printf("Withdrawn successfully! New balance: %.2f\n", bank[i].balance);
            }
            return;
        }
    }
    printf("Account not found.\n");
}

void checkBalance() {
    int accNo;
    printf("Enter account number: ");
    scanf("%d", &accNo);
    for (int i = 0; i < count; i++) {
        if (bank[i].accNo == accNo) {
            printf("Account: %d\n", bank[i].accNo);
            printf("Name: %s\n", bank[i].name);
            printf("Balance: %.2f\n", bank[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void displayAllAccounts() {
    if (count == 0) {
        printf("No accounts in the system.\n");
        return;
    }
    printf("\n=== All Accounts ===\n");
    printf("AccNo\tName\t\tBalance\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\n", bank[i].accNo, bank[i].name, bank[i].balance);
    }
}

int main() {
    int choice;
    do {
        printf("\n=== Bank Account System ===\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: displayAllAccounts(); break;
            case 6: printf("Thank you!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 6);
    return 0;
}