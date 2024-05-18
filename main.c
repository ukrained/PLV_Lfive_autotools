#include <stdio.h>
#include "support.h"


int main (int argc, char *argv[])
{
    int a, b, c;
    char action;

    printf("Hello, world!\n");
    checkout();

    printf(" > Choose the action (+, -, *, /, x): ");
    scanf("%c", &action);
 
    while (action != 'x')
    {
        printf("Gimme A: ");
        scanf("%d", &a);

        printf("Gimme B: ");
        scanf("%d", &b);
        

        switch(action) {
            case '+':
                c = add(a, b);
                break;
            case '-':
                c = substract(a, b);
                break;
            case '*':
                c = multiply(a, b);
                break;
            case '/':
                c = divide(a, b);
                break;
            default:
                printf("Unsupported action\n");
                break;
        }

        printf("[ result ] %d %c %d = %d", a, action, b, c);
        
        printf("\n ---\n > Choose the action (+, -, *, /, x): ");
        while (getchar() != '\n'); // flush stdin buffer        

        scanf("%c", &action);
    }

    return 0;
}
