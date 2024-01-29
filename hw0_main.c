#include <stdio.h>

void printGame(int arrToPrint[]);

int printPrompt();

int move(int starting);

int a[] = {2, 2, 2, 2, 0};

int main() {
    printGame(a);
    int place = printPrompt();
    int endedOn = move(place);
    if (a[endedOn] == 0) {
        printf("You lost because the last counter fell into section %d.\n", endedOn+1);
        return 0;
    }
    else if (a[4] == 8) {
        printf("You won!\n");
    }
    return 0;
}

void printGame(int arrToPrint[]) {
    printf("%d_%d_%d_%d_|_%d\n", arrToPrint[0], arrToPrint[1], arrToPrint[2], arrToPrint[3], arrToPrint[4]);
}

int printPrompt() {
    printf("Choose a section (1-4): ");
    int choice;
    scanf("%d", &choice);
    if (a[choice-1] == 0) {
        printf("Invalid choice.\n");
        return printPrompt();
    }
    else if (choice >= 1 && choice <= 4) {
        return choice;
    }
    else {
        printf("Invalid choice.\n");
        return printPrompt();
    }
}

int move(int starting) {
    // convert starting to its index
    starting--;
    
    int amount = a[starting];
    a[starting] = 0;
    starting++;

    while (amount > 0) {
        a[starting]++;
        amount--;
        if (starting == 4) {
            starting = 0;
        }
        else {starting++;}
    }
    return starting;
}


