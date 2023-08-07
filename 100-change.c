#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void calculateMinCoins(int amount) {
    int coinValues[] = {25, 10, 5, 2, 1};
    int totalCoins = 0;

    if (amount < 0) {
        printf("0\n");
        return;
    }

    for (int i = 0; i < sizeof(coinValues) / sizeof(coinValues[0]); i++) {
        while (amount >= coinValues[i]) {
            amount -= coinValues[i];
            totalCoins++;
        }
    }

    printf("%d\n", totalCoins);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int amount = atoi(argv[1]);
    calculateMinCoins(amount);

    return 0;
}
