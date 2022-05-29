#include<stdio.h>

int main() {
    float grades[6] = {5.2, 7, 8.5, 6, 10, 9.5};

    int loop_total = sizeof(grades) / sizeof(*grades);

    // For Loop

    printf("For Loop:\n\n");

    for (int i = 0; i < loop_total; i++) {
        int current_index = i + 1;

        printf("Grade number %i = %.2f\n", current_index, grades[i]);
    }

    printf("\n");

    // While Loop

    printf("While Loop:\n\n");

    int counter = 0;

    while (counter < loop_total) {
        int current_index = counter + 1;

        printf("Grade number %i = %.2f\n", current_index, grades[counter]);

        counter++;
    }
}
