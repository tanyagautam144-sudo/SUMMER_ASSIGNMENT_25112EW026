//Write a program to Create ticket booking system.
// Ticket Booking System using Functions

#include <stdio.h>

// Structure to store ticket details
struct Ticket
{
    char name[50];
    int age;
    int tickets;
};

int availableSeats = 100;

// Function to book tickets
void bookTicket(struct Ticket *t)
{
    printf("\nEnter Customer Name: ");
    scanf(" %[^\n]", t->name);

    printf("Enter Age: ");
    scanf("%d", &t->age);

    printf("Enter Number of Tickets: ");
    scanf("%d", &t->tickets);

    if(t->tickets <= availableSeats)
    {
        availableSeats = availableSeats - t->tickets;
        printf("\nTicket Booked Successfully!\n");
        printf("Remaining Seats = %d\n", availableSeats);
    }
    else
    {
        printf("\nSorry! Only %d seats are available.\n", availableSeats);
    }
}

// Function to cancel tickets
void cancelTicket(struct Ticket *t)
{
    int cancel;

    printf("\nEnter Number of Tickets to Cancel: ");
    scanf("%d", &cancel);

    if(cancel <= t->tickets)
    {
        t->tickets = t->tickets - cancel;
        availableSeats = availableSeats + cancel;

        printf("Ticket Cancelled Successfully!\n");
        printf("Remaining Booked Tickets = %d\n", t->tickets);
    }
    else
    {
        printf("Invalid Number of Tickets!\n");
    }
}

// Function to show available seats
void showSeats()
{
    printf("\nAvailable Seats = %d\n", availableSeats);
}

// Function to display booking details
void display(struct Ticket t)
{
    printf("\n------ Booking Details ------\n");
    printf("Customer Name : %s\n", t.name);
    printf("Age           : %d\n", t.age);
    printf("Booked Tickets: %d\n", t.tickets);
    printf("Available Seats: %d\n", availableSeats);
}

int main()
{
    struct Ticket customer;
    customer.tickets = 0;

    int choice;

    do
    {
        printf("\n====== TICKET BOOKING SYSTEM ======\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Show Available Seats\n");
        printf("4. Display Booking Details\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket(&customer);
                break;

            case 2:
                cancelTicket(&customer);
                break;

            case 3:
                showSeats();
                break;

            case 4:
                display(customer);
                break;

            case 5:
                printf("\nThank You for Using the Ticket Booking System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}