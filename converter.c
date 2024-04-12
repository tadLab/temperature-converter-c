#include <stdio.h>

/**
 * @brief Convert Celsius to Fahrenheit.
 * 
 * This function takes a temperature value in Celsius and
 * converts it to Fahrenheit using the conversion formula.
 * 
 * @param celsius Temperature value in Celsius.
 * @return The equivalent temperature in Fahrenheit.
 */
int Fahrenheit(int celsius) {
    return (celsius * 9 / 5) + 32;
}

/**
 * @brief Convert Fahrenheit to Celsius.
 * 
 * This function takes a temperature value in Fahrenheit and
 * converts it to Celsius using the conversion formula.
 * 
 * @param fahrenheit Temperature value in Fahrenheit.
 * @return The equivalent temperature in Celsius.
 */
int Celsius(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

/**
 * @brief Main function to run the temperature conversion program.
 * 
 * This function provides an interactive command-line interface
 * for users to select the conversion mode (Celsius to Fahrenheit
 * or Fahrenheit to Celsius) and input the temperature to convert.
 * 
 * @param argc Number of command-line arguments.
 * @param argv Array of command-line arguments.
 * @return 0 on successful execution.
 */
int main(int argc, char const *argv[]) {
    char mode;
    int temperature;

    printf("Please select what do you want to convert:\n");
    printf("C - Celsius to Fahrenheit, F - Fahrenheit to Celsius\n");

    scanf("%c", &mode);  

    printf("Enter the temperature to convert: "); 
    scanf("%d", &temperature);

    switch (mode) {
        case 'C':
        case 'c':
            printf("%d Celsius is %d Fahrenheit\n", temperature, Celsius(temperature));
            break;
        case 'F':
        case 'f': 
            printf("%d Fahrenheit is %d Celsius\n", temperature, Fahrenheit(temperature));
            break;
        default:
            printf("Invalid mode, please select 'C' or 'F'\n");
            break;
    }

    return 0;
}