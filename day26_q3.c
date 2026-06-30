#include <stdio.h>

int main() {
    int choice;
    float balance = 10000; // shuru me 10k
    float amount;
    
    do {
        printf("\n--- ATM MENU ---\n");
        printf("1. Balance Check\n");
        printf("2. Cash Withdraw\n");
        printf("3. Cash Deposit\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;
                
            case 2:
                printf("Kitna nikalna hai: ");
                scanf("%f", &amount);
                if(amount > balance) {
                    printf("Itna paisa nahi hai\n");
                }
                else if(amount <= 0) {
                    printf("Galat amount\n");
                }
                else {
                    balance -= amount;
                    printf("Rs. %.2f nikal gaye. Naya balance: Rs. %.2f\n", amount, balance);
                }
                break;
                
            case 3:
                printf("Kitna deposit: ");
                scanf("%f", &amount);
                if(amount <= 0) {
                    printf("Galat amount\n");
                }
                else {
                    balance += amount;
                    printf("Rs. %.2f deposit. Naya balance: Rs. %.2f\n", amount, balance);
                }
                break;
                
            case 4:
                printf("Dhanyawaad!\n");
                break;
                
            default:
                printf("1-4 me daal bhai\n");
        }
        
    } while(choice!= 4);
    
    return 0;
}