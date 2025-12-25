// 3A,3B=27/10/25

// #include <stdio.h>
// #define MAX_SIZE 100
// int queue[MAX_SIZE];
// int f = -1, r = -1;
// void enqueue(int ele) {
//     if (r >= MAX_SIZE - 1) {
//         printf("Queue Overflow! Cannot insert %d\n", ele);
//     }
//     else {
//         if (f == -1 && r == -1) {
//             f = 0;
//             r = 0;
//         }
//         else {
//             r++;
//         }
//         queue[r] = ele;
//         printf("Inserted element %d at position %d\n", ele, r);
//     }
// }
// void dequeue() {
//     if (f == -1 || f > r) {
//         printf("Queue Underflow!\n");
//     }
//     else {
//         printf("Deleted element %d from position %d\n", queue[f], f);
//         f++;
//         if (f > r) {
//             f = -1;
//             r = -1;
//         }
//     }
// }
// void display() {
//     if (f == -1 || f > r) {
//         printf("Queue is empty!\n");
//     }
//     else {
//         printf("Queue elements: ");
//         for (int i = f; i <= r; i++) {
//             printf("%d ", queue[i]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int choice, element,size;
//     printf("Enter the size of the queue (max %d): ", MAX_SIZE);
//     scanf("%d", &size);
//     if (size > MAX_SIZE) {
//         printf("Size exceeds maximum limit of %d. Setting size to %d.\n",MAX_SIZE, MAX_SIZE);
//         size = MAX_SIZE;
//     }

//     do {
//         printf("\nLINEAR QUEUE OPERATIONS\n");
//         printf("1. Enqueue (Insert)\n");
//         printf("2. Dequeue (Delete)\n");
//         printf("3. Display Queue\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 printf("Enter element to insert: ");
//                 scanf("%d", &element);
//                 enqueue(element);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
                
//             case 3:
//                 display();
//                 break;
                
//             case 4:
//                 printf("Exiting program...\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//                 break;
//         }
//     } while (choice != 4);
//     return 0;
// }

// circular queue implementation
// #include <stdio.h>
// #define MAX_SIZE 100
// int queue[MAX_SIZE];
// int f = -1, r = -1;
// void enqueue(int ele) {
//     if ((r + 1) % MAX_SIZE == f) {
//         printf("Queue Overflow! Cannot insert %d\n", ele);
//     }
//     else {
//         if (f == -1 && r == -1) {
//             f = 0;
//             r = 0;
//         }
//         else {
//             r = (r + 1) % MAX_SIZE;
//         }
//         queue[r] = ele;
//         printf("Inserted element %d at position %d\n", ele, r);
//     }
// }
// void dequeue() {
//     if (f == -1) {
//         printf("Queue Underflow!\n");
//     }
//     else {
//         printf("Deleted element %d from position %d\n", queue[f], f);
//         if (f == r) {
//             f = -1;
//             r = -1;
//         }
//         else {
//             f = (f + 1) % MAX_SIZE;
//         }
//     }
// }
// void display() {
//     if (f == -1) {
//         printf("Queue is empty!\n");
//     }
//     else {              
//         printf("Queue elements: ");
//         int i = f;
//         while (1) {
//             printf("%d ", queue[i]);
//             if (i == r) break;
//             i = (i + 1) % MAX_SIZE;
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int choice, element,size;
//     printf("Enter the size of the queue (max %d): ", MAX_SIZE);
//     scanf("%d", &size);
//     if (size > MAX_SIZE) {
//         printf("Size exceeds maximum limit of %d. Setting size to %d.\n",MAX_SIZE, MAX_SIZE);
//         size = MAX_SIZE;
//     }
//     do {
//         printf("\nCIRCULAR QUEUE OPERATIONS \n");
//         printf("1. Enqueue (Insert)\n");
//         printf("2. Dequeue (Delete)\n");
//         printf("3. Display Queue\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 printf("Enter element to insert: ");
//                 scanf("%d", &element);
//                 enqueue(element);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 printf("Exiting program...\n");
//                 break;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//                 break;
//         }
//     } while (choice != 4);
//     return 0;
// }


//PRIORITY QUEUE IMPLEMENTATION
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
struct Node {
    int data;
    int priority;
};
struct Node* queue[MAX_SIZE];
int f = -1, r = -1;
void enqueue(int ele, int prio) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = ele;
    newNode->priority = prio;
    if (f == -1 && r == -1) {
        f = 0;
        r = 0;
        queue[r] = newNode;
    }
    else {
        int i;
        for (i = r; i >= f; i--) {
            if (newNode->priority > queue[i]->priority) {
                queue[i + 1] = queue[i];
            }
            else {
                break;
            }
        }
        queue[i + 1] = newNode;
        r++;
    }
    printf("Inserted element %d with priority %d\n", ele, prio);
}
void dequeue() {
    if (f == -1 || f > r) {
        printf("Queue Underflow!\n");
    }
    else {
        printf("Deleted element %d with priority %d\n", queue[f]->data, queue
[f]->priority);
        free(queue[f]);
        f++;
        if (f > r) {
            f = -1;
            r = -1;
        }
    }
}
void display() {
    if (f == -1 || f > r) {
        printf("Queue is empty!\n");
    }
    else {
        printf("Queue elements (data, priority): ");
        for (int i = f; i <= r; i++) {
            printf("(%d, %d) ", queue[i]->data, queue[i]->priority  );
        }
        printf("\n");
    }
}
int main() {
    int choice, element, priority,size;
    printf("Enter the size of the queue (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size > MAX_SIZE) 
    {
        printf("Size exceeds maximum limit of %d. Setting size to %d.\n",MAX_SIZE, MAX_SIZE);
        size = MAX_SIZE;
    }
    do {
        printf("\nPRIORITY QUEUE OPERATIONS \n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter its priority: ");
                scanf("%d", &priority);
                enqueue(element, priority);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 4);
    return 0;
}

//DOUBLY ENDED QUEUE IMPLEMENTATION
#include <stdio.h>
#define MAX_SIZE 100
int deque[MAX_SIZE];
int f = -1, r = -1;
void insertFront(int ele) {
    if (f == 0 && r == MAX_SIZE - 1)
    {
        printf("Deque Overflow! Cannot insert %d at front\n", ele);
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
        }
        else if (f == 0)
        {
            f = MAX_SIZE - 1;
        }
        else
        {
            f--;
        }
        deque[f] = ele;
        printf("Inserted element %d at front position %d\n", ele, f);
    }
}
void insertRear(int ele)
{
    if (r == MAX_SIZE - 1 && f == 0)
    {
        printf("Deque Overflow! Cannot insert %d at rear\n", ele);
    }
    else
    {
        if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
        }
        else if (r == MAX_SIZE - 1)
        {
            r = 0;
        }
        else
        {
            r++;
        }
        deque[r] = ele;
        printf("Inserted element %d at rear position %d\n", ele, r);
    }
}
void deleteFront()
{
    if (f == -1)
    {
        printf("Deque Underflow! Cannot delete from front\n");
    }
    else
    {
        printf("Deleted element %d from front position %d\n", deque[f], f);
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (f == MAX_SIZE - 1)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}
void deleteRear()
{
    if (f == -1)
    {
        printf("Deque Underflow! Cannot delete from rear\n");
    }
    else
    {
        printf("Deleted element %d from rear position %d\n", deque[r], r);      
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else if (r == 0)
        {
            r = MAX_SIZE - 1;
        }
        else
        {
            r--;
        }
    }
}
void display()
{
    if (f == -1)
    {
        printf("Deque is empty!\n");
    }
    else
    {
        printf("Deque elements: ");
        int i = f;
        while (1)
        {
            printf("%d ", deque[i]);
            if (i == r) break;
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}   
int main()
{
    int choice, element;
    do{
        printf("\nDOUBLE ENDED QUEUE OPERATIONS\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter element to insert at front: ");
                scanf("%d", &element);
                insertFront(element);
                break;
            case 2:
                printf("Enter element to insert at rear: ");
                scanf("%d", &element);
                insertRear(element);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
