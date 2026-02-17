#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int dice;
    int rolls = 0;
    int streak = 0;
    
    
    srand(time(NULL));  
    
    while (streak < 3) {

        dice = rand() % 6 + 1;
        rolls++;

        if (dice == 6) {
            streak++;
        } 
        else {
            streak = 0;
        }

        printf("Roll %d: %d   Streak = %d\n", rolls, dice, streak);
    }

    printf("It took %d rolls to get three 6s in a row.\n", rolls);

    return 0;
}
