#include <stdio.h>
#include <stdlib.h> // For exit() function

#define n 5

void main()
{
    int queue[n], ch = 1, front = 0, rear = 0, i, j = 1;

    printf("Queue using Array");
    printf("\n1. Insertion");
    printf("\n2. Deletion");
    printf("\n3. Display");
    printf("\n4. Exit");

    while (ch)
    {
        printf("\n\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            if (rear == n)
                printf("\nQueue is Full");
            else
            {
                printf("\nEnter number %d: ", j++);
                scanf("%d", &queue[rear++]);
            }
            break;

        case 2:
            if (front == rear)
            {
                printf("\nQueue is empty");
            }
            else
            {
                printf("\nDeleted Element is %d", queue[front++]);
            }
            break;

        case 3:
            printf("\nQueue Elements are:\n");
            if (front == rear)
                printf("Queue is Empty\n");
            else
            {
                for (i = front; i < rear; i++)
                {
                    printf("%d\n", queue[i]);
                }
            }
            break;

        case 4:
            exit(0);

        default:
            printf("Wrong Choice: please see the options");
        }
    }

    // getch(); // Commented out getch() as it's not standard and may not be available in all environments
}
