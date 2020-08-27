#include <stdio.h>
int main() {
    printf("\nHey there! What do you want to convert?\n1: Fahrenheit to Celsius\n2: Celsius to Fahrenheit\nEnter the number: ");
    int answer;
    scanf("%d", &answer);
    if (answer == 1) {
        int fahrenheit;
        printf("\nEnter the Fahrenheit value: ");
        scanf("%d", &fahrenheit);
        int celsius = (fahrenheit - 32) / 1.8;
        printf("\n%d degrees Fahrenheit equals to %d degrees Celsius.\n", fahrenheit, celsius);
    } else if (answer == 2) {
        int celsius;
        printf("\nEnter the Celsius value: ");
        scanf("%d", &celsius);
        int fahrenheit = celsius * 1.8 + 32;
        printf("\n%d degrees Celsius equals to %d degrees Fahrenheit.\n", celsius, fahrenheit);
    } else {
        printf("\nYou haven't chosen one of the numbers.\n\n");
        main();
    }
    return 0;
}