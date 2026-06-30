#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int isIssued; // 0 = Available, 1 = Issued
};

int main() {
    struct Book library[50]; // 50 books tak rakh sakte
    int choice, count = 0, i, searchId, found;

    do {
        printf("\n--- LIBRARY MANAGEMENT ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Book add karo
                printf("Book ID: ");
                scanf("%d", &library[count].id);
                printf("Title: ");
                scanf("%s", library[count].title);
                printf("Author: ");
                scanf("%s", library[count].author);
                library[count].isIssued = 0; // shuru me available
                count++;
                printf("Book add ho gayi\n");
                break;

            case 2: // Saari books dikhao
                if(count == 0) {
                    printf("Library khaali hai\n");
                }
                else {
                    printf("\nID\tTitle\tAuthor\tStatus\n");
                    for(i = 0; i < count; i++) {
                        printf("%d\t%s\t%s\t", library[i].id, library[i].title, library[i].author);
                        if(library[i].isIssued == 0) printf("Available\n");
                        else printf("Issued\n");
                    }
                }
                break;

            case 3: // ID se book search karo
                printf("Book ID daal: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == searchId) {
                        printf("ID: %d\nTitle: %s\nAuthor: %s\n", library[i].id, library[i].title, library[i].author);
                        if(library[i].isIssued == 0) printf("Status: Available\n");
                        else printf("Status: Issued\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0) printf("Book nahi mili\n");
                break;

            case 4: // Issue karo
                printf("Issue karne ke liye Book ID: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == searchId) {
                        if(library[i].isIssued == 0) {
                            library[i].isIssued = 1;
                            printf("Book issued ho gayi\n");
                        }
                        else {
                            printf("Book already issued hai\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0) printf("Book nahi mili\n");
                break;

            case 5: // Return karo
                printf("Return karne ke liye Book ID: ");
                scanf("%d", &searchId);
                found = 0;
                for(i = 0; i < count; i++) {
                    if(library[i].id == searchId) {
                        if(library[i].isIssued == 1) {
                            library[i].isIssued = 0;
                            printf("Book return ho gayi\n");
                        }
                        else {
                            printf("Book issue hi nahi hui thi\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0) printf("Book nahi mili\n");
                break;

            case 6:
                printf("Library band. Bye!\n");
                break;

            default:
                printf("Galat choice 1-6 me daal\n");
        }
    } while(choice!= 6);

    return 0;
}