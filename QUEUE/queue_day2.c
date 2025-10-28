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

//circular queue implementation
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

//implementation of dequeue using array
#include <stdio.h>
#define MAX_SIZE 100
int deque[MAX_SIZE];
int front = -1, rear = -1;
void enqueue_front(int ele) {
    if (front == 0) {
        printf("Deque Overflow at front %d\n", ele);
    }
    else {
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        }
        else {
            front--;
        }
        deque[front] = ele;
        printf("Inserted element %d at front position %d\n", ele, front);
    }
}
void enqueue_rear(int ele) {
    if (rear >= MAX_SIZE - 1) {
        printf("Deque Overflow at rear%d\n", ele);
    }
    else {
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        deque[rear] = ele;
        printf("Inserted element %d at rear position %d\n", ele, rear);
    }
}
void dequeue_front() {
    if (front == -1 || front > rear) {
        printf("Deque Underflow at front\n");
    }
    else {
        printf("Deleted element %d from front position %d\n", deque[front], front);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}
void dequeue_rear() {
    if (rear == -1 || rear < front) {
        printf("Deque Underflow at rear\n");
    }
    else {
        printf("Deleted element %d from rear position %d\n", deque[rear], rear  );
        rear--;
        if (rear < front) {
            front = -1;
            rear = -1;
        }
    }
}
void display() {
    if (front == -1 || front > rear) {
        printf("Deque is empty!\n");
    }
    else {
        printf("Deque elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", deque[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice, element;
    do {
        printf("\nDEQUE OPERATIONS \n");
        printf("1. Enqueue Front (Insert at front)\n");
        printf("2. Enqueue Rear (Insert at rear)\n");
        printf("3. Dequeue Front (Delete from front)\n");
        printf("4. Dequeue Rear (Delete from rear)\n");
        printf("5. Display Deque\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                printf("Enter element to insert at front: ");
                scanf("%d", &element);
                enqueue_front(element);
                break;
            case 2:
                printf("Enter element to insert at rear: ");
                scanf("%d", &element);
                enqueue_rear(element);
                break;
            case 3:
                dequeue_front();
                break;
            case 4:
                dequeue_rear();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 6);
    return 0;
}