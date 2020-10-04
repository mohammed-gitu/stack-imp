#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 10

void display();
void pop();
void push();
void peek();
int stack[SIZE];
int top = -1;
int main(int argc, char *argv[])
{
    int input;
    char des;

    do
    {
        printf("Enter the operations want to perform: - \n 1)Push\n 2)POP\n 3)Display\n 4)Peek\n 5) Exit\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
        printf("You are noe exiting program >>");
            exit(1);
            break;
        default:
            printf("Invalid input");
            break;
        }
        printf("\nDo you want to continue? \n Y/N\n");
        scanf(" %c", &des);
    } while (des == 'Y' || des == 'y');

    return 0;
}

void push()
{
    int element;
    printf("Enter the number you want to push in stack \n");
    scanf("%d", &element);
    if (top == SIZE - 1)
    {
        printf("Stack overflow, you can't insert element now \n");
    }

    else
    {
        top++;
        stack[top] = element;
    }
}

void pop()
{

    if (top == -1)
    {
        printf("Stack underflow, you can't remove the element now \n");
    }

    else
    {
        top--;
    }
}

void display()
{
    int elem = top;
    if (elem == -1)
    {
        printf("Stack underflow, can't display empty stack \n");
    }
    else
    {
        while (elem != -1)
        {
            printf("%d\t", stack[elem]);
            elem--;
        }
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack underflow!!");
    }
    else
    {
        printf("%d", stack[top]);
    }
}