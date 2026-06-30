#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    
    srand(time(0));
    number = rand() % 100 + 1; 
    
    printf("Number Guessing Game! 1-100 ke beech guess karo\n");
    
    do {
        printf("Tera guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess > number) {
            printf("Chota socho bhai\n");
        }
        else if(guess < number) {
            printf("Bada socho bhai\n");
        }
        else {
            printf("Sahi! %d attempts me jeet gaya", attempts);
        }
        
    } while(guess!= number);
    
    return 0;
}