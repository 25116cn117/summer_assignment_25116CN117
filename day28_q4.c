#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contacts[100]; 
    int choice, count = 0, i, found;
    char searchName[50];

    do {
        printf("\n--- CONTACT MANAGEMENT ---\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by Name\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(count >= 100) {
                    printf("Contact list full ho gayi\n");
                    break;
                }
                printf("Name: ");
                scanf("%s", contacts[count].name);
                printf("Phone: ");
                scanf("%s", contacts[count].phone);
                printf("Email: ");
                scanf("%s", contacts[count].email);
                count++;
                printf("Contact add ho gaya\n");
                break;

            case 2: 
                if(count == 0) {
                    printf("Contact list khaali hai\n");
                }
                else {
                    printf("\n--- ALL CONTACTS ---\n");
                    printf("S.No\tName\t\tPhone\t\tEmail\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%s\t\t%s\t%s\n", i+1, contacts[i].name, contacts[i].phone, contacts[i].email);
                    }
                }
                break;

            case 3: 
                printf("Kiska contact dhundna hai: ");
                scanf("%s", searchName);
                found = 0;
                for(i = 0; i < count; i++) {
                    // strcmp se naam compare karte hain
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        printf("\nContact Found:\n");
                        printf("Name: %s\n", contacts[i].name);
                        printf("Phone: %s\n", contacts[i].phone);
                        printf("Email: %s\n", contacts[i].email);
                        found = 1;
                        break;
                    }
                }
                if(found == 0) {
                    printf("Contact nahi mila\n");
                }
                break;

            case 4:
                printf("Kiska contact delete karna hai: ");
                scanf("%s", searchName);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(strcmp(contacts[i].name, searchName) == 0) {
                        // Delete karne ka tareeka: aage wale ko peeche shift kar do
                        for(int j = i; j < count - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        count--; // ek contact kam ho gaya
                        printf("Contact delete ho gaya\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0) {
                    printf("Contact nahi mila\n");
                }
                break;

            case 5:
                printf("Contact app band. Bye!\n");
                break;

            default:
                printf("1-5 me daal bhai\n");
        }
    } while(choice!= 5);

    return 0;
}