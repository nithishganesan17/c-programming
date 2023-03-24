//18. Program to store 3 book records in one structure / using array of structure.
#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 50
#define MAX_AUTHOR_LENGTH 50
#define MAX_ISBN_LENGTH 20

struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char isbn[MAX_ISBN_LENGTH];
};

int main() {
    struct Book books[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter the details of book %d:\n", i+1);

        printf("Title: ");
        fgets(books[i].title, MAX_TITLE_LENGTH, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;

        printf("Author: ");
        fgets(books[i].author, MAX_AUTHOR_LENGTH, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;

        printf("ISBN: ");
        fgets(books[i].isbn, MAX_ISBN_LENGTH, stdin);
        books[i].isbn[strcspn(books[i].isbn, "\n")] = 0;

        printf("\n");
    }

    printf("The details of the 3 books are:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d:\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("ISBN: %s\n", books[i].isbn);
        printf("\n");
    }

    return 0;
}

