#include<stdio.h>
#include<stdlib.h>
char stack[100];
int top = -1;
int operator(char e) {
    if (e == '+' || e == '-' || e == '/' || e == '*' || e=='('  ||e==')') {
        return 1;
    }
    return 0;
}
int prec(char e) {
    if (e == '*' || e == '/') {
        return 1;
    }
    return 0;
}
void push(char e){
    stack[++top]=e;
}
char *post(char *s) {
    char *a = (char *)malloc(100 * sizeof(char));
    int i = 0, j = 0;
    while (s[i] != '\0') {
        if (!operator(s[i])) {
            a[j] = s[i];
            j++;
        } else {
            if (s[i] == '(') {
                push(s[i]);
            } else if (s[i] == ')') {
                while (stack[top] != '(') {
                    a[j] = stack[top];
                    j++;
                    top--;
                }
                top--; // Pop the '(' from the stack
            } else if (operator(s[i])) {
                while (top >= 0 && stack[top] != '(' && prec(s[i]) <= prec(stack[top])) {
                    a[j] = stack[top];
                    top--;
                    j++;
                }
                push(s[i]);
            }
        }
        i++;
    }
    // Pop any remaining operators from the stack to the output
    while (top >= 0) {
        a[j] = stack[top];
        j++;
        top--;
    }
    a[j] = '\0';
    return a;
}
int main() {
    char str[] = "((a/b)-(c+d)*e)";
    char *pos = post(str);
    printf("Postfix expression: %s\n", pos);
    // Free the dynamically allocated memory
    free(pos);
    return 0;
}
