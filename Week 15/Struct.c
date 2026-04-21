#include <stdio.h>
#include <string.h>

/* Structure Definition */
struct Card {
    char face[20];
    char suit[20];
};

/* typedef Example */
typedef struct {
    int x;
    int y;
} Point;

/* Function: Pass by Value */
void changeCardByValue(struct Card c) {
    strcpy(c.face, "Ace");
    strcpy(c.suit, "Spades");
}

/* Function: Pass by Reference */
void changeCardByReference(struct Card *c) {
    strcpy(c->face, "Ace");
    strcpy(c->suit, "Spades");
}

/* Function: Print Card */
void printCard(struct Card c) {
    printf("%s of %s\n", c.face, c.suit);
}

/* Function: Modify Point by Value */
void modifyPointByValue(Point p) {
    p.x = 100;
    p.y = 200;
}

/* Function: Modify Point by Reference */
void modifyPointByReference(Point *p) {
    p->x = 100;
    p->y = 200;
}

int main() {

    /* Structure Initialization */
    struct Card aCard = {"Three", "Hearts"};

    /* Pointer to Structure */
    struct Card *cardPtr = &aCard;

    /* Array of Structures */
    struct Card deck[3] = {
        {"Three", "Hearts"},
        {"King", "Diamonds"},
        {"Ten", "Spades"}
    };

    /* typedef Structure */
    Point p1 = {10, 20};

    printf("=== Dot Operator ===\n");
    printf("%s of %s\n", aCard.face, aCard.suit);

    printf("\n=== Arrow Operator ===\n");
    printf("%s of %s\n", cardPtr->face, cardPtr->suit);

    printf("\n=== (*pointer).member ===\n");
    printf("%s of %s\n", (*cardPtr).face, (*cardPtr).suit);

    printf("\n=== Array of Structures ===\n");
    for (int i = 0; i < 3; i++) {
        printf("deck[%d]: %s of %s\n", i, deck[i].face, deck[i].suit);
    }

    printf("\n=== Pass by Value (No Change) ===\n");
    printCard(aCard);
    changeCardByValue(aCard);
    printCard(aCard);

    printf("\n=== Pass by Reference (Modified) ===\n");
    changeCardByReference(&aCard);
    printCard(aCard);

    printf("\n=== typedef Structure ===\n");
    printf("Before: (%d, %d)\n", p1.x, p1.y);
    modifyPointByValue(p1);
    printf("After Value: (%d, %d)\n", p1.x, p1.y);
    modifyPointByReference(&p1);
    printf("After Reference: (%d, %d)\n", p1.x, p1.y);

    return 0;
}