#include <stdio.h>

void printGame(int arrToPrint[]);

int printPrompt();

int move(int starting);

int a[] = {2, 2, 2, 2, 0};

int main() {
    int gameOver = 0;
    printGame(a);
    while (gameOver == 0) {
        int place = printPrompt();
        int endedOn = move(place);
        if (a[endedOn-1] == 1 && endedOn != 5) {
            printf("You lost because the last counter fell into section %d.\n", endedOn);
            return 0;
            gameOver = 1;
        }
        else if (a[4] == 8) {
            printf("You won!\n");
            gameOver = 1;
        }
    }
    return 0;
}

void printGame(int arrToPrint[]) {
    printf("%d %d %d %d | %d\n", arrToPrint[0], arrToPrint[1], arrToPrint[2], arrToPrint[3], arrToPrint[4]);
}

int printPrompt() {
    printf("Choose a section (1-4): ");
    int choice;
    scanf("%d", &choice);
    if (a[choice-1] == 0) {
        printf("Invalid choice. ");
        return printPrompt();
    }
    else if (choice >= 1 && choice <= 4) {
        return choice;
    }
    else {
        printf("Invalid choice. ");
        return printPrompt();
    }
}

int move(int starting) {
    int amount = a[starting-1];
    a[starting-1] = 0;

    while (amount != 0) {
        starting++;
        if (starting == 6) {
            starting = 1;
        }
        a[starting-1]++;
        amount--;

    }
    if (a[4] != 8) {
        printGame(a);
    }
    if (starting != 5) {
        if (a[starting-1] != 1) {
            printf("Last piece landed in section %d. Continue sowing seeds!\n", starting);
            return move(starting);
        }
    }
    return starting;
}


