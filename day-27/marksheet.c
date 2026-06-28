#include <stdio.h>

// Structure to store student details
struct Student
{
    int rollNo;
    char name[50];
    float marks1, marks2, marks3, marks4, marks5;
    float total;
    float percentage;
    char grade;
};

// Function Prototypes
void inputStudent(struct Student *s);
void calculateResult(struct Student *s);
void displayMarksheet(struct Student s);

int main()
{
    struct Student s;

    inputStudent(&s);          // Function Call
    calculateResult(&s);       // Function Call
    displayMarksheet(s);       // Function Call

    return 0;
}

// Function to input student details
void inputStudent(struct Student *s)
{
    printf("Enter Roll Number: ");
    scanf("%d", &s->rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &s->marks1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &s->marks2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &s->marks3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &s->marks4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &s->marks5);
}

// Function to calculate total, percentage and grade
void calculateResult(struct Student *s)
{
    s->total = s->marks1 + s->marks2 + s->marks3 + s->marks4 + s->marks5;

    s->percentage = s->total / 5;

    if(s->percentage >= 90)
        s->grade = 'A';
    else if(s->percentage >= 75)
        s->grade = 'B';
    else if(s->percentage >= 60)
        s->grade = 'C';
    else if(s->percentage >= 40)
        s->grade = 'D';
    else
        s->grade = 'F';
}

// Function to display marksheet
void displayMarksheet(struct Student s)
{
    printf("\n========== MARKSHEET ==========\n");

    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);

    printf("\nMarks\n");
    printf("Subject 1 : %.2f\n", s.marks1);
    printf("Subject 2 : %.2f\n", s.marks2);
    printf("Subject 3 : %.2f\n", s.marks3);
    printf("Subject 4 : %.2f\n", s.marks4);
    printf("Subject 5 : %.2f\n", s.marks5);

    printf("\nTotal      : %.2f\n", s.total);
    printf("Percentage : %.2f%%\n", s.percentage);
    printf("Grade      : %c\n", s.grade);

    printf("===============================\n");
}