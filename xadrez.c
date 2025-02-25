#include <stdio.h>

//Method making use of a simple for loop to register the moves
void moveBishop(int moves, char *directionOne, char *directionTwo) {
    if(moves > 0) {
        moveBishop(moves - 1, directionOne, directionTwo);
        for (int i = 0; i < 1; i++) { 
            printf("%s & ", directionOne);
            for(int j = 0; j < 1 ; j++) {
                printf("%s \n", directionTwo);
            } 
        }
    }
}

//Method making use of recursion to register the tower moves
void moveTower(int moves, char *direction) {
    if(moves > 0) {
        printf("%s \n", direction);
        moveTower(moves - 1, direction);
    }
    
}

//Method making use of recursion to register the queen moves
void moveQueen(int moves, char *direction) {
    if(moves > 0) {
        printf("%s \n", direction);
        moveQueen(moves - 1, direction);
    }
}

void moveHorse(char *initialDirection, char *finalDirection) {
    int initialMove = 0;

    for(int i = 0; i < 1; i++) {
        do  {
            initialMove++;
            printf("%s \n", initialDirection);
        } while(initialMove < 2);

        printf("%s \n", finalDirection);
    }
}

int main() {
    //Variables to help keep track of each pieces moves
    int bishopMoves = 5, towerMoves = 5, queenMoves = 8;

    //Call the functions responsible for moving the pieces, passing the number of moves and the direction
    printf("Bispo: \n");
    moveBishop(bishopMoves, "cima", "direita");
    printf("\n");

    printf("Torre: \n");
    moveTower(towerMoves, "direita");
    printf("\n");

    printf("Rainha: \n");
    moveQueen(queenMoves, "esquerda");
    printf("\n");

    //Horse does not recieve any values for the moves because it can only move in a "L" shape of 3 moves
    printf("Cavalo: \n");
    moveHorse("cima", "direita");
    printf("\n");
    
    return 0;
}
