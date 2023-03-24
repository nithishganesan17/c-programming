#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1000

int main() {
    char filename[100];
    FILE *file;
    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int num_lines = 0;
    int i;

    printf("Enter the name of the file to be opened: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return 1;
    }

    while (fgets(lines[num_lines], MAX_LINE_LENGTH, file)) {
        num_lines++;
    }

    printf("The content of the file %s are:\n", filename);
    for (i = 0; i < num_lines; i++) {
        printf("%s", lines[i]);
    }

    fclose(file);

    return 0;
}

