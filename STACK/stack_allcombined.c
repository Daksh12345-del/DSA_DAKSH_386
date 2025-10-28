#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define MAX 100
typedef struct
{
    int arr[MAX];
    int top;
} Stack;
void init(Stack *s)
{
    s->top = -1;
}
int isEmpty(Stack *s)
{
    return s->top == -1;
}
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}
void push(Stack *s, int val)
{
    if (isFull(s))
    {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++(s->top)] = val;
    printf("%d pushed to stack.\n", val);
}

int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

int peek(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty.\n");
        return -1;
    }
    return s->arr[s->top];
}

void display(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = s->top; i >= 0; i--)
        printf("%d ", s->arr[i]);
    printf("\n");
}
int evaluatePostfix(char *exp)
{
    Stack s;
    init(&s);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        char ch = exp[i];
        if (isdigit(ch))
        {
            push(&s, ch - '0');
        }
        else
        {
            int val2 = pop(&s);
            int val1 = pop(&s);
            switch (ch)
            {
            case '+':
                push(&s, val1 + val2);
                break;
            case '-':
                push(&s, val1 - val2);
                break;
            case '*':
                push(&s, val1 * val2);
                break;
            case '/':
                push(&s, val1 / val2);
                break;
            case '^':
                push(&s, (int)pow(val1, val2));
                break;
            default:
                printf("Invalid operator: %c\n", ch);
                return -1;
            }
        }
    }
    return pop(&s);
}
int isBalanced(char *exp)
{
    Stack s;
    init(&s);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        char ch = exp[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(&s, ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (isEmpty(&s))
                return 0;
            char top = pop(&s);
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return 0;
        }
    }
    return isEmpty(&s);
}
int precedence(char op)
{
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}
void infixToPostfix(char *infix, char *postfix)
{
    Stack s;
    init(&s);
    int k = 0;
    for (int i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];
        if (isalnum(ch))
        {
            postfix[k++] = ch;
        }
        else if (ch == '(')
        {
            push(&s, ch);
        }
        else if (ch == ')')
        {
            while (!isEmpty(&s) && peek(&s) != '(')
            {
                postfix[k++] = pop(&s);
            }
            pop(&s);
        }
        else
        {
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(ch))
            {
                postfix[k++] = pop(&s);
            }
            push(&s, ch);
        }
    }

    while (!isEmpty(&s))
    {
        postfix[k++] = pop(&s);
    }

    postfix[k] = '\0';
}
int main()
{
    Stack st;
    init(&st);
    int choice, val;
    char expr[100], postfix[100];
    while (1)
    {
        printf("\n========= STACK MENU =========\n");
        printf("1. Array Implementation of Stack\n");
        printf("2. Evaluate Postfix Expression\n");
        printf("3. Check Balanced Parenthesis\n");
        printf("4. Infix to Postfix Conversion\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int subChoice;
            printf("\n--- STACK OPERATIONS ---\n");
            printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Back\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);
            switch (subChoice)
            {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                push(&st, val);
                break;
            case 2:
                printf("Popped value: %d\n", pop(&st));
                break;
            case 3:
                printf("Top value: %d\n", peek(&st));
                break;
            case 4:
                display(&st);
                break;
            case 5:
                break;
            default:
                printf("Invalid choice.\n");
            }
            break;
        }

        case 2:
            printf("Enter postfix expression: ");
            scanf("%s", expr);
            printf("Result = %d\n", evaluatePostfix(expr));
            break;

        case 3:
            printf("Enter expression: ");
            scanf("%s", expr);
            if (isBalanced(expr))
                printf("Parentheses are balanced.\n");
            else
                printf("Parentheses are NOT balanced.\n");
            break;

        case 4:
            printf("Enter infix expression: ");
            scanf("%s", expr);
            infixToPostfix(expr, postfix);
            printf("Postfix: %s\n", postfix);
            break;

        case 5:
            printf("Exiting program. Goodbye.\n");
            exit(0);

        default:
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
