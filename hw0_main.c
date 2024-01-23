#include <stdio.h>

void printGame(int a[]) {
    printf("%d_%d_%d_%d_|_%d\n", a[0], a[1], a[2], a[3], a[4]);
}

int printPrompt() {
    int stopPromptLoop = 0;
    while (stopPromptLoop == 0) {
        printf("Choose a section (1-4): ");
        int choice;
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            stopPromptLoop = 1;
            printf("\n");
            return choice;
        }
        else {
            printf("\nInvalid choice. ");
        }
    }
}

int sowSeeds(int startSpace, int *a[]) {
    int seeds = a[startSpace];
    a[startSpace] = 0;
    while (seeds != 0) {
        if (startSpace++ == 5) {
            startSpace = 0;
        }
        else {
            startSpace++;
        }
        a[startSpace]++;
        seeds--;
    }
    return startSpace;
}

int main() {
    int end = 0;
    int win = 0;
    int spaces[] = {2, 2, 2, 2, 0};
    int currentChoice;
    int lastSpaceSowed;
    int ableToChoose = 1;
    while (end == 0) {
        printGame(spaces);
        if (ableToChoose == 1) {
            currentChoice = printPrompt()-1;
        }
        lastSpaceSowed = sowSeeds(currentChoice, spaces);
        if (lastSpaceSowed == 4) {
            ableToChoose = 1;
        }
        else if (spaces[lastSpaceSowed] == 0) {
            printf("You lost because the last counter fell into section %d.", lastSpaceSowed+1);
            end = 1;
            break;
        }
        else {
            printf("Last piece landed in section %d. Continue sowing seeds!");
            ableToChoose == 0;
            currentChoice == lastSpaceSowed;
        }
        if (spaces[4] == 8) {
            end = 1;
            win = 1;
        }
    }
    if (win == 1) {
        printf("You won!\n");
    }
    return 0;
}
