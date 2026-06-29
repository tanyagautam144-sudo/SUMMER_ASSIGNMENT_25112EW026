//Write a program to Create inventory management system
// Inventory Management System using Functions

#include <stdio.h>

// Structure to store product details
struct Product
{
    int productID;
    char productName[50];
    int quantity;
    float price;
};

// Function to add a product
void addProduct(struct Product *p)
{
    printf("\nEnter Product ID: ");
    scanf("%d", &p->productID);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p->productName);

    printf("Enter Quantity: ");
    scanf("%d", &p->quantity);

    printf("Enter Price: ");
    scanf("%f", &p->price);

    printf("\nProduct Added Successfully!\n");
}

// Function to update quantity
void updateQuantity(struct Product *p)
{
    int newQuantity;

    printf("\nEnter New Quantity: ");
    scanf("%d", &newQuantity);

    p->quantity = newQuantity;

    printf("Quantity Updated Successfully!\n");
}

// Function to display product details
void displayProduct(struct Product p)
{
    printf("\n------ Product Details ------\n");
    printf("Product ID   : %d\n", p.productID);
    printf("Product Name : %s\n", p.productName);
    printf("Quantity     : %d\n", p.quantity);
    printf("Price        : %.2f\n", p.price);
}

int main()
{
    struct Product product;
    int choice;

    do
    {
        printf("\n====== INVENTORY MANAGEMENT SYSTEM ======\n");
        printf("1. Add Product\n");
        printf("2. Update Quantity\n");
        printf("3. Display Product Details\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct(&product);
                break;

            case 2:
                updateQuantity(&product);
                break;

            case 3:
                displayProduct(product);
                break;

            case 4:
                printf("\nThank You for Using the Inventory Management System!\n");
                break;

            default:
                printf("\nInvalid Choice! Please Try Again.\n");
        }

    } while(choice != 4);

    return 0;
}