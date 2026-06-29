// Contact Management System using Functions

#include <stdio.h>

// Structure to store contact details
struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

// Function to add a contact
void addContact(struct Contact *c)
{
    printf("\nEnter Name: ");
    scanf(" %[^\n]", c->name);

    printf("Enter Phone Number: ");
    scanf("%s", c->phone);

    printf("Enter Email Address: ");
    scanf("%s", c->email);

    printf("\nContact Added Successfully!\n");
}

// Function to update contact details
void updateContact(struct Contact *c)
{
    printf("\nEnter New Name: ");
    scanf(" %[^\n]", c->name);

    printf("Enter New Phone Number: ");
    scanf("%s", c->phone);

    printf("Enter New Email Address: ");
    scanf("%s", c->email);

    printf("\nContact Updated Successfully!\n");
}

// Function to display contact details
void displayContact(struct Contact c)
{
    printf("\n------ Contact Details ------\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);
    printf("Email : %s\n", c.email);
}

int main()
{
    struct Contact contact;
    int choice;

    do
    {
        printf("\n====== CONTACT MANAGEMENT SYSTEM ======\n");
        printf("1. Add Contact\n");
        printf("2. Update Contact\n");
        printf("3. Display Contact\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact(&contact);
                break;

            case 2:
                updateContact(&contact);
                break;

            case 3:
                displayContact(contact);
                break;

            case 4:
                printf("\nThank You for Using the Contact Management System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 4);

    return 0;
}