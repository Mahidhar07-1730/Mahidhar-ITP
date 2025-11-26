#include <stdio.h>

struct Item {
    char name[50];
    int quantity;
    float price;
};

int main() {
    char supplier[50];
    int n;
    float grandTotal = 0;

    printf("======== GOODS RECEIPT SYSTEM ========\n");

    printf("Enter Supplier Name: ");
    scanf("%s", supplier);

    printf("Enter number of items received: ");
    scanf("%d", &n);

    struct Item items[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for item %d\n", i + 1);

        printf("Item Name: ");
        scanf("%s", items[i].name);

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Price per unit: ");
        scanf("%f", &items[i].price);

        grandTotal += items[i].quantity * items[i].price;
    }

    printf("\n\n========== GOODS RECEIPT ==========\n");
    printf("Supplier: %s\n", supplier);
    printf("-----------------------------------\n");
    printf("%-15s %-10s %-10s %-10s\n", "Item", "Qty", "Price", "Total");
    printf("-----------------------------------\n");

    for (int i = 0; i < n; i++) {
        float total = items[i].quantity * items[i].price;
        printf("%-15s %-10d %-10.2f %-10.2f\n",
               items[i].name, items[i].quantity, items[i].price, total);
    }

    printf("-----------------------------------\n");
    printf("Grand Total: %.2f\n", grandTotal);
    printf("===================================\n");

    return 0;
}
