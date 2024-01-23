#include <stdio.h>

void printGame(int a[]) {
    printf("%d_%d_%d_%d_|_%d\n", a[0], a[1], a[2], a[3], a[4]);
}

int printPrompt() {
    printf("Choose a section (1-4): ");
    int choice;
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 4) {
        return choice;
    }
    else {
        printf("Invalid choice.\n");
        return printPrompt();
    }
}

int main() {
    int a[] = {2, 2, 2, 2, 0};
    printGame(a);
    printPrompt();
    return 0;
}
