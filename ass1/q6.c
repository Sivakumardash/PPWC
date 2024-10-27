#include <stdio.h>

int main() {
    float meters;

    // Prompt the user to enter a distance in meters
    printf("Enter distance in meters: ");
    scanf("%f", &meters);

    // Perform conversions
    float kilometers = meters * 0.001;
    float centimeters = meters * 100;
    float millimeters = meters * 1000;
    float feet = meters * 3.28084;
    float inches = meters * 39.3701;

    // Display the conversions in a neatly aligned table
    printf("+------------------+------------------+\n");
    printf("| Unit             | Value            |\n");
    printf("+------------------+------------------+\n");
    printf("| Meters           | %-18.2f |\n", meters);
    printf("| Kilometers       | %-18.5f |\n", kilometers);
    printf("| Centimeters      | %-16.2f |\n", centimeters);
    printf("| Millimeters      | %-16.2f |\n", millimeters);
    printf("| Feet             | %-16.2f |\n", feet);
    printf("| Inches           | %-16.2f |\n", inches);
    printf("+------------------+------------------+\n");


// little dout is there in %-16.2f or -%18.2f?

  printf("+------------------+------------------+\n");
printf("| Unit             | Value            |\n");
printf("+------------------+------------------+\n");
printf("| Meters           | %-18.2f |\n", meters);
printf("| Kilometers       | %-18.5f |\n", kilometers);
printf("| Centimeters      | %-18.2f |\n", centimeters);
printf("| Millimeters      | %-18.2f |\n", millimeters);
printf("| Feet             | %-18.2f |\n", feet);
printf("| Inches           | %-18.2f |\n", inches);
printf("+------------------+------------------+\n");



    return 0;
}
