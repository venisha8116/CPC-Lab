// 2. Create a structure book with book title, author, publication, and price. Read data of 3 books and display.

#include<stdio.h>

struct Book {
    char title[100];
    char author[50];
    char publication[50];
    float price;
};

int main() {
    struct Book books[3];

    // Reading data for 3 books
    for(int i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Publication: ");
        scanf(" %[^\n]", books[i].publication);
        printf("Price: ");
    }

    for(int i=0; i<3; i++){
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s");
        printf("Publication: %s\n", books[i].publication);
    }