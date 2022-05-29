#include<stdio.h>

int main() {
    // basic variables

    int product_value;
    const int FEE_PERCENTAGE = 10;

    double fee_value = FEE_PERCENTAGE / 100;
    double total_price;

    printf("Inform the product value (hit Enter):\n");
    scanf("%i", &product_value);

    total_price = product_value + (product_value * fee_value);

    printf("The total price is R$ %f\n\n", total_price);

    // arrays

    float grades[6] = {5.2, 7, 8.5, 6, 10, 9.5};

    int total_grades = sizeof(grades) / sizeof(*grades);

    printf("total de notas = %i", total_grades);
}
