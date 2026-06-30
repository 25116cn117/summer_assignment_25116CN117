#include <stdio.h>
#include <string.h>

struct Ticket {
    int seatNo;
    char name[50];
    int isBooked;
    float price;
};

int main() {
    struct Ticket seats[50]; 
    int totalSeats = 10; 
    int choice, i, seatChoice, found;
    float ticketPrice = 250.0; 
    for(i = 0; i < totalSeats; i++) {
        seats[i].seatNo = i + 1; 
        strcpy(seats[i].name, "");
        seats[i].isBooked = 0;
        seats[i].price = ticketPrice;
    }

    do {
        printf("\n--- TICKET BOOKING SYSTEM ---\n");
        printf("1. Show Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Show Booked Tickets\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nSeat No\tStatus\t\tPrice\n");
                for(i = 0; i < totalSeats; i++) {
                    printf("%d\t", seats[i].seatNo);
                    if(seats[i].isBooked == 0) {
                        printf("Available\t");
                    }
                    else {
                        printf("Booked - %s\t", seats[i].name);
                    }
                    printf("Rs. %.2f\n", seats[i].price);
                }
                break;

            case 2: 
                printf("Konsi seat chahiye 1-%d: ", totalSeats);
                scanf("%d", &seatChoice);
                
                if(seatChoice < 1 || seatChoice > totalSeats) {
                    printf("Galat seat number\n");
                }
                else if(seats[seatChoice - 1].isBooked == 1) {
                    printf("Seat %d already booked hai %s ke naam pe\n", seatChoice, seats[seatChoice - 1].name);
                }
                else {
                    printf("Apna naam daal: ");
                    scanf("%s", seats[seatChoice - 1].name);
                    seats[seatChoice - 1].isBooked = 1;
                    printf("Seat %d book ho gayi %s ke naam pe\n", seatChoice, seats[seatChoice - 1].name);
                    printf("Pay Rs. %.2f\n", seats[seatChoice - 1].price);
                }
                break;

            case 3: 
                printf("Konsi seat cancel karni hai: ");
                scanf("%d", &seatChoice);
                
                if(seatChoice < 1 || seatChoice > totalSeats) {
                    printf("Galat seat number\n");
                }
                else if(seats[seatChoice - 1].isBooked == 0) {
                    printf("Seat %d already khaali hai\n", seatChoice);
                }
                else {
                    printf("Seat %d cancel ho gayi. %s ka naam hata diya\n", seatChoice, seats[seatChoice - 1].name);
                    strcpy(seats[seatChoice - 1].name, "");
                    seats[seatChoice - 1].isBooked = 0;
                }
                break;

            case 4: 
                printf("\n--- BOOKED TICKETS ---\n");
                found = 0;
                for(i = 0; i < totalSeats; i++) {
                    if(seats[i].isBooked == 1) {
                        printf("Seat %d - %s - Rs. %.2f\n", seats[i].seatNo, seats[i].name, seats[i].price);
                        found = 1;
                    }
                }
                if(found == 0) {
                    printf("Abhi koi ticket book nahi hui\n");
                }
                break;

            case 5:
                printf("Booking band. Dhanyawaad!\n");
                break;

            default:
                printf("1-5 me daal bhai\n");
        }
    } while(choice!= 5);

    return 0;
}