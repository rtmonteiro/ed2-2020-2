#include <stdio.h>
#include <stdlib.h>
#include "stack_int.h"
#include "stack_char.h"

int main() {
    char line[1024];

    scanf("%1023[^\n]", line);
    int i = 0;
    char digit;

    stackInt *stackNumbers = initStackInt();
    stackChar *stackOperations = initStackChar();

    while ((digit = line[i]) != '\0') {
        if (digit == '(') { i++; continue; }
        else if (digit >= '0' && digit <= '9') pushInt(stackNumbers, atoi(&digit));
        else if (digit == '+') pushChar(stackOperations, '+');
        else if (digit == '-') pushChar(stackOperations, '-');
        else if (digit == '*') pushChar(stackOperations, '*');
        else if (digit == '/') pushChar(stackOperations, '/');
        else if (digit == ')') {
            char op = popChar(stackOperations);
            int b = popInt(stackNumbers);
            int a = popInt(stackNumbers);
            switch (op) {
                case '+': pushInt(stackNumbers, a + b); break;
                case '-': pushInt(stackNumbers, a - b); break;
                case '*': pushInt(stackNumbers, a * b); break;
                case '/': pushInt(stackNumbers, a / b); break;
            }
        }
        i++;
    }

    printf("%d", popInt(stackNumbers));

    free(stackNumbers);
    free(stackOperations);
    return 0;
}
