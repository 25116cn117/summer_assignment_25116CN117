#include <stdio.h>
#include <string.h>

struct Account {
    int acc_no;
    char name[50];
    float balance;
};

int main() {
    struct Account bank[100]; 
    int choice, count = 0, i, searchAcc, found;
    float amount;

    do {
        printf("\n--- BANK ACCOUNT SYSTEM ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Account Number: ");
                scanf("%d", &bank[count].account");
                found = 0;
                for(i = 0; i < count; i++) {
                    if(bank[i].acc_no == bank[count].acc_no) {
                        printf("Account number already exists\n");
                        found = 1;
                        break;
                    }
                }
                
                if(found == 0) {
                    printf("Account Holder Name: ");
                    scanf("%s", bank[count].name);
                    printf("Initial Deposit: ");
                    scanf("%f", &bank[count].balance);
                    count++;
                    printf("Account create ho gaya\n");
                }
                break;

            case 2: 
                printf("Account Number daal: ");
                scanf("%d", &searchAcc);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(bank[i].acc_no == searchAcc) {
                        printf("Kitna deposit: ");
                        scanf("%f", &amount);
                        if(amount > 0) {
                            bank[i].balance += amount;
                            printf("Rs. %.2f deposit. New balance: %.2f\n", amount, bank[i].balance);
                        }
                        else {
                            printf("Galat amount\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0) printf("Account nahi mila\n");
                break;

            case 3:
                printf("Account Number daal: ");
                scanf("%d", &searchAcc);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(bank[i].acc_no == searchAcc) {
                        printf("Kitna withdraw: ");
                        scanf("%f", &amount);
                        if(amount > bank[i].balance) {
                            printf("Insufficient balance\n");
                        }
                        else if(amount <= 0) {
                            printf("Galat amount\n");
                        }
                        else {
                            bank[i].balance -= amount;
                            printf("Rs. %.2f withdrawn. New balance: %.2f\n", amount, bank[i].balance);
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0) printf("Account nahi mila\n");
                break;

            case 4: 
                printf("Account Number daal: ");
                scanf("%d", &searchAcc);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(bank[i].acc_no == searchAcc) {
                        printf("Name: %s\nBalance: Rs. %.2f\n", bank[i].name, bank[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(found == 0) printf("Account nahi mila\n");
                break;

            case 5: 
                if(count == 0) {
                    printf("Koi account nahi hai\n");
                }
                else {
                    printf("\nAccNo\tName\tBalance\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%s\t%.2f\n", bank[i].acc_no, bank[i].name, bank[i].balance);
                    }
                }
                break;

            case 6:
                printf("Bank band. Dhanyawaad!\n");
                break;

            default:
                printf("1-6 me daal bhai\n");
        }
    } while(choice!= 6);

    return 0;
}