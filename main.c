#include <stdio.h>
#include <stdlib.h>

// Function to convert the integer value and write to the output file
void convertAndWrite(FILE *output, int value) {
    fprintf(output, "%d\n", value);
}

int main() {
    FILE *input, *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    char format[5];
    int value;

    // Read input from the input file and process until the end
    while (fscanf(input, "%4s %d", format, &value) != EOF) {
        if (format[0] == '%' && (format[1] == 'd' || format[1] == 'i')) {
            convertAndWrite(output, value);
        } else {
            fprintf(output, "Invalid format: %s\n", format);
        }
    }

    fclose(input);
    fclose(output);

    printf("Conversion completed. Check the output.txt file.\n");
    return 0;
}

