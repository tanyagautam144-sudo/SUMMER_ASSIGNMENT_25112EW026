//Write a program to Create library management system.
  #include <stdio.h>

// Structure to store book details
struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

// Function Prototypes
void addBook(struct Book b[], int *count);
void viewBooks(struct Book b[], int count);
void searchBook(struct Book b[], int count);
void updateBook(struct Book b[], int count);
void deleteBook(struct Book b[], int *count);

int main()
{
    struct Book b[100];
    int count = 0;
    int choice;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook(b, &count);
                break;

            case 2:
                viewBooks(b, count);
                break;

            case 3:
                searchBook(b, count);
                break;

            case 4:
                updateBook(b, count);
                break;

            case 5:
                deleteBook(b, &count);
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Function to Add Book
void addBook(struct Book b[], int *count)
{
    printf("\nEnter Book ID: ");
    scanf("%d", &b[*count].bookId);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", b[*count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[*count].author);

    printf("Enter Quantity: ");
    scanf("%d", &b[*count].quantity);

    (*count)++;

    printf("Book Added Successfully!\n");
}

// Function to View Books
void viewBooks(struct Book b[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Books Available!\n");
        return;
    }

    printf("\n------ Book Records ------\n");

    for(i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID   : %d\n", b[i].bookId);
        printf("Title     : %s\n", b[i].title);
        printf("Author    : %s\n", b[i].author);
        printf("Quantity  : %d\n", b[i].quantity);
    }
}

// Function to Search Book
void searchBook(struct Book b[], int count)
{
    int id, i, found = 0;

    printf("Enter Book ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(b[i].bookId == id)
        {
            printf("\nBook Found\n");
            printf("Book ID   : %d\n", b[i].bookId);
            printf("Title     : %s\n", b[i].title);
            printf("Author    : %s\n", b[i].author);
            printf("Quantity  : %d\n", b[i].quantity);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}

// Function to Update Book
void updateBook(struct Book b[], int count)
{
    int id, i, found = 0;

    printf("Enter Book ID to Update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(b[i].bookId == id)
        {
            printf("Enter New Title: ");
            scanf(" %[^\n]", b[i].title);

            printf("Enter New Author: ");
            scanf(" %[^\n]", b[i].author);

            printf("Enter New Quantity: ");
            scanf("%d", &b[i].quantity); 

            printf("Book Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}

// Function to Delete Book
void deleteBook(struct Book b[], int *count)
{
    int id, i, j, found = 0;

    printf("Enter Book ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < *count; i++)
    {
        if(b[i].bookId == id)
        {
            for(j = i; j < *count - 1; j++)
            {
                b[j] = b[j + 1];
            }

            (*count)--;

            printf("Book Deleted Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Book Not Found!\n");
}