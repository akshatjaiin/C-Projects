#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_SIZE 100
#define AUTHOR_SIZE 100

typedef struct {
    int id;
    char title[TITLE_SIZE];
    char author[AUTHOR_SIZE];
} Book;

Book library[MAX_BOOKS];
int book_count = 0;

void addBook() {
    if (book_count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &library[book_count].id);
    getchar();  // to consume the newline character after entering the ID
    printf("Enter Book Title: ");
    fgets(library[book_count].title, TITLE_SIZE, stdin);
    strtok(library[book_count].title, "\n");  // remove the newline character from the title
    printf("Enter Book Author: ");
    fgets(library[book_count].author, AUTHOR_SIZE, stdin);
    strtok(library[book_count].author, "\n");  // remove the newline character from the author

    book_count++;
    printf("Book added successfully.\n");
}

void displayBooks() {
    if (book_count == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("ID\tTitle\t\t\tAuthor\n");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < book_count; i++) {
        printf("%d\t%-20s\t%-20s\n", library[i].id, library[i].title, library[i].author);
    }
}

void searchBook() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            printf("Book found:\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            return;
        }
    }

    printf("Book not found.\n");
}

void deleteBook() {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            for (int j = i; j < book_count - 1; j++) {
                library[j] = library[j + 1];
            }
            book_count--;
            printf("Book deleted successfully.\n");
            return;
        }
    }

    printf("Book not found.\n");
}

int main() {
    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
