#include <stdio.h>
#include <string.h>

struct Bank {
    int acc_no;
    char name[50];
    float balance;
};

int main() {
    struct Bank acc;
    int choice;
    float amount;

    printf("Account Number: ");
    scanf("%d", &acc.acc_no);
    printf("Naam: ");
    scanf("%s", acc.name);
    printf("Starting Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n--- BANK MENU ---\n");
        printf("1. Balance Check\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance: Rs. %.2f\n", acc.balance);
                break;

            case 2:
                printf("Deposit amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Rs. %.2f deposit. New balance: %.2f\n", amount, acc.balance);
                break;

            case 3:
                printf("Withdraw amount: ");
                scanf("%f", &amount);
                if(amount > acc.balance) {
                    printf("Insufficient balance\n");
                }
                else {
                    acc.balance -= amount;
                    printf("Rs. %.2f withdrawn. New balance: %.2f\n", amount, acc.balance);
                }
                break;

            case 4:
                printf("Acc No: %d\nName: %s\nBalance: %.2f\n", acc.acc_no, acc.name, acc.balance);
                break;
        }
    } while(choice!= 5);

    return 0;
}