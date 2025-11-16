#include <stdio.h>
#include <stdlib.h>

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void sortPrices(float *prices, int n) {
    int i, j;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if (*(prices + j) > *(prices + j + 1)) {
                swap(prices + j, prices + j + 1);
            }
        }
    }
}

int main() {
    int n, i;
    float *prices;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Error: Number of items must be greater than 0.\n");
        printf("this program is made by Angel_Bavarva_25CE006");
        return 1;
    }
    printf("Enter the prices of the items:\n");
    for(i = 0; i < n; i++) {
        if(scanf("%f", (prices + i)) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            free(prices);
            return 1;
        }
    }

    sortPrices(prices, n);

    printf("Sorted prices:\n");
    for(i = 0; i < n; i++) {
        printf("%.2f ", *(prices + i));
    }
    printf("\n");

    free(prices);
    printf("this program is made by Angel_Bavarva_25CE006");

    return 0;
}
