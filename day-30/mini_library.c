// Mini Library Management System using Functions

#include <stdio.h>

// Structure to store book details
struct Book
{
    int bookID;
    char title[50];
    char author[50];
    int available;   // 1 = Available, 0 = Issued
};

// Function to add a book
void addBook(struct Book *b)
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b->bookID);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b->title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b->author);

    b->available = 1;

    printf("\nBook Added Successfully!\n");
}

// Function to issue a book
void issueBook(struct Book *b)
{
    if(b->available == 1)
    {
        b->available = 0;
        printf("\nBook Issued Successfully!\n");
    }
    else
    {
        printf("\nBook is Already Issued!\n");
    }
}

// Function to return a book
void returnBook(struct Book *b)
{
    if(b->available == 0)
    {
        b->available = 1;
        printf("\nBook Returned Successfully!\n");
    }
    else
    {
        printf("\nBook is Already Available in Library!\n");
    }
}

// Function to display book details
void displayBook(struct Book b)
{
    printf("\n------ Book Details ------\n");
    printf("Book ID     : %d\n", b.bookID);
    printf("Title       : %s\n", b.title);
    printf("Author      : %s\n", b.author);

    if(b.available == 1)
        printf("Status      : Available\n");
    else
        printf("Status      : Issued\n");
}

int main()
{
    struct Book book;
    int choice;

    do
    {
        printf("\n====== MINI LIBRARY SYSTEM ======\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Display Book Details\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook(&book);
                break;

            case 2:
                issueBook(&book);
                break;

            case 3:
                returnBook(&book);
                break;

            case 4:
                displayBook(book);
                break;

            case 5:
                printf("\nThank You for Using the Mini Library System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}