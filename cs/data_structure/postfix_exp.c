#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
    int top;
    int size;
    char *ch;
};
int isoperator(char e) {
    if (e == '+' || e == '*' || e == '/' || e == '-' || e==')' || e=='(') {
        return 1;
    }
    return 0;
}
int setprec(char e) {
    if (e == '*' || e == '/') {
        return 2;
    } else if (e == '+' || e == '-') {
        return 1;
    }
    return 0;
}
struct stack *s;
void post() {
    int j = 0;
    s = (struct stack*)malloc(sizeof(struct stack));
    s->top = -1;
    s->ch = (char*)malloc(100 * sizeof(char));
    s->size = 100;
    char exp[] = "((a/b)-(c+d)*e)"; // Initialize exp as an array
    char pos[strlen(exp)+1]; // Initialize pos
    int i = 0;
    while (exp[i] != '\0') {
        if (!isoperator(exp[i])) {
            pos[j] = exp[i];
            j++;
        } else if (exp[i] == '(') {
            s->top++;
            s->ch[s->top] = exp[i];
        } else if (exp[i] == ')') {
            while (s->ch[s->top] != '(') {
                pos[j] = s->ch[s->top];
                j++;
                s->top--;
            }
                s->top--; // Pop the '('  
        } else if(isoperator(exp[i])) {
            while (s->top >= 0 && s->ch[s->top]!='(' && setprec(exp[i]) >= setprec(s->ch[s->top])) {
                pos[j] = s->ch[s->top];
                j++;
                s->top--;
            }
            s->top++;
            s->ch[s->top] = exp[i];
        }
        i++;
    }
    while (s->top >= 0) {
        pos[j] = s->ch[s->top];
        j++;
        s->top--;
    }
    pos[j] = '\0'; // Null-terminate the postfix expression
    printf("%s", pos);
    // Free allocated memory
    free(s->ch);
    free(s);
}
int main() {
    post();
    return 0;
}