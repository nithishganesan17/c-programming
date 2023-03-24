#include <stdio.h>

int main() {
    FILE *source, *destination;
    char c;

    source = fopen("source_file.txt", "r");
    destination = fopen("destination_filee.txt", "w");

    if (source == NULL || destination == NULL) {
        printf("\n");
        return 1;
    }

    while ((c = fgetc(source)) != EOF) {
        fputc(c, destination);
    }
	printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
