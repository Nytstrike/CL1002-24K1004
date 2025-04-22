// Define a Book structure with fields like title, author, publication_year, and price. Create
// an array of books and write functions to:
// 1. Display all books in the library
// 2. Search for a book by title
// 3. List book by a specific author
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char title[100];
    char author[50];
    int publication_year;
    float price;
} Book;

void displayBooks(Book books[], int count) {
    if (count > 0) {
        for (int i = 0; i < count; i++) {
            printf("\nBook #%d\n", i + 1);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n", books[i].price);
        }
    } else {
        printf("No books in the library.\n");
    }
}

void findBook(Book books[], int count, char *title) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].title, title) == 0) {
            printf("Book found: %s by %s\n", books[i].title, books[i].author);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book '%s' not found.\n", title);
    }
}

void inputBooks(Book books[], int count) {
    getchar();
    for (int i = 0; i < count; i++) {
        printf("\nBook #%d\n", i + 1);
        printf("Enter title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("Enter author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Enter publication year: ");
        scanf("%d", &books[i].publication_year);

        printf("Enter price: ");
        scanf("%f", &books[i].price);
        getchar();
    }
}

void findByAuthor(Book books[], int count, char *author) {
    int found = 0;
    printf("\nBooks by %s:\n", author);
    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].author, author) == 0) {
            printf("Title: %s\n", books[i].title);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by %s.\n", author);
    }
}

int main() {
    Book books[100];
    int numBooks = 0, choice;
    char input[100];

    while (1) {
        printf("\nLibrary Management\n");
        printf("1. Add Books\n");
        printf("2. Find Book by Title\n");
        printf("3. Display All Books\n");
        printf("4. Find Books by Author\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("How many books to add? ");
                scanf("%d", &numBooks);
                inputBooks(books, numBooks);
                break;
            case 2:
                getchar();
                printf("Enter title: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0';
                findBook(books, numBooks, input);
                break;
            case 3:
                displayBooks(books, numBooks);
                break;
            case 4:
                getchar();
                printf("Enter author: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0';
                findByAuthor(books, numBooks, input);
                break;
            case 5:
                printf("Exiting.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
