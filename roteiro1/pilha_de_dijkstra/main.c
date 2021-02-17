#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack_char.h"



int main() {
    char line[1024];

    scanf("%1023[^\n]", line);
    int i = 0;
    char digit;

    stack *stackNumbers = initStack();
    stack *stackOperations = initStack();

    while ((digit = line[i]) != '\0') {
        if (digit == '(') { i++; continue; }
        else if (digit >= '0' && digit <= '9') push(stackNumbers, atoi(&digit));
        else if (digit == '+') push(stackOperations, (void *) '+');
        else if (digit == '-') push(stackOperations, (void *) '-');
        else if (digit == '*') push(stackOperations, (void *) '*');
        else if (digit == '/') push(stackOperations, (void *) '/');
        else if (digit == ')') {
            char op = (char) pop(stackOperations);
            int b = (int) pop(stackNumbers);
            int a = (int) pop(stackNumbers);
            switch (op) {
                case '+': push(stackNumbers, (void *) (a + b)); break;
                case '-': push(stackNumbers, (void *) (a - b)); break;
                case '*': push(stackNumbers, (void *) (a * b)); break;
                case '/': push(stackNumbers, (void *) (a / b)); break;
            }
        }
        i++;
    }

    printf("%d", (int) pop(stackNumbers));

    free(stackNumbers);
    free(stackOperations);
    return 0;
}