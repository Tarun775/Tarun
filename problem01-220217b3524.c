#include <stdio.h>
#include <stdlib.h> // for exit() function
//#include <conio.h> // conio.h is not standard in all compilers
#define MAX 20 // Changed MAX to 20 to match array size
/* Define the required functions to create a list, insert into the list,
delete an element from the list, search and display the list */
void create();
void insert();
void deletion();
void search();
void display();
int b[20], n, i, pos;

void main()
{
    //clrscr(); // Not needed in modern compilers

    int ch;
    char g = 'y';
    do
    {
        printf("\n Main Menu");
        printf("\n 1. Create \n 2. Delete \n 3. Search \n 4. Insert \n 5. Display\n 6. Exit \n");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);
        /* The following switch will call the appropriate choice provided
        by the user */
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            deletion();
            break;
        case 3:
            search();
            break;
        case 4:
            insert();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0); // Using exit(0) to exit the program
            break;
        default:
            printf(" \n Enter the correct choice:");
        }

        printf("\n Do you want to continue (y/n): ");
        scanf(" %c", &g); // Corrected the scanf format specifier
    }
    /* The program is intended to run till we provide inputs other than ‘y’
    or ‘Y’ */
    while (g == 'y' || g == 'Y');

    // getch(); // Not needed in modern compilers
}

void create()
{
    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);
    /* The loop should run till we get the ‘n’ inputs */
    for (i = 0; i < n; i++)
    {
        printf("\n Enter Element %d: ", i + 1); // Corrected prompt message
        scanf("%d", &b[i]);
    }
}

void deletion()
{
    printf("\n Enter the position you want to delete: ");
    scanf("%d", &pos);
    if (pos >= n || pos < 0) // Added condition for invalid position
    {
        printf("\n Invalid Location::");
        return;
    }
    else
    {
        for (i = pos; i < n - 1; i++)
        {
            b[i] = b[i + 1];
        }
        n--;
    }
    printf("\n The Elements after deletion:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", b[i]);
    }
}

void search()
{
    int e;
    printf("\n Enter the Element to be searched: ");
    scanf("%d", &e);
    for (i = 0; i < n; i++)
    {
        if (b[i] == e)
        {
            printf("Value %d is in the %d Position\n", e, i);
            return;
        }
    }
    printf("Value %d is not in the list.\n", e);
}

void insert()
{
    int p;
    printf("\n Enter the position you need to insert: ");
    scanf("%d", &pos);
    if (pos >= n || pos < 0) // Added condition for invalid position
    {
        printf("\n Invalid Location::");
        return;
    }
    else
    {
        printf("\n Enter the element to insert: ");
        scanf("%d", &p);
        for (i = n - 1; i >= pos; i--)
        {
            b[i + 1] = b[i];
        }
        b[pos] = p;
        n++;
    }
    printf("\n The list after insertion:\n");
    display();
}

void display()
{
    printf("\n The Elements of The list ADT are:");
    for (i = 0; i < n; i++)
    {
        printf("\n %d", b[i]);
    }
    printf("\n");
}
