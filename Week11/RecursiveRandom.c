#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Problem:
    --------
    Recursively simulate rolling a fair 6-sided die until you get
    TWO consecutive 6s.

    Requirements:
    - Use recursion (no loops)
    - Use a GLOBAL variable to track the previous roll
    - Count how many rolls  it takes
    - Print each roll
// syntax for random int min = 0, max = 100; 
int randomInRange = rand() % (max - min + 1) + min;
    int main() {
    srand(time(NULL));  // seed random generator

    int totalTurns = rollDiceRecursive();

    printf("\nTwo consecutive 6s achieved!\n");
    printf("Total rolls needed: %d\n", totalTurns);
    return 0;
}
*/


int prevRoll = 0;


int rollDiceRecursive(int turns) {
  
    int roll = rand() % 6 + 1;
    printf("Roll %d: %d\n", turns + 1, roll);

    if (roll == 6 && prevRoll == 6) {
        return turns + 1;
    }

    
    prevRoll = roll;

   
    return rollDiceRecursive(turns + 1);
}

int main() {
    srand(time(NULL));  // seed random generator

    int totalTurns = rollDiceRecursive(0);

    printf("\nTwo consecutive 6s achieved!\n");
    printf("Total rolls needed: %d\n", totalTurns);

    return 0;
}