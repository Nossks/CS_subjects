#include <stdio.h>
#include <math.h>
#include <float.h>
float f(float root) {
    return root*root*root - 4*root - 9;
}

void entr(float *a, float *b) {
    printf("Enter initial values of a and b: ");
    scanf("%f %f", a, b);
    if (f(*a) * f(*b) > 0) {
        printf("Invalid initial guesses. f(a) and f(b) must have opposite signs.\n");
        entr(a, b);
    }
}

int main() {
    float a, b, c, c_prev = FLT_MAX;
    entr(&a, &b);
    int i=0;
    do {
        c = (a + b) / 2;     
        printf("iteration %d: a=%.5f , b=%.5f and c=%f\n",i++,a,b,c);
        if (f(c) == 0 || fabs(c - c_prev) < 0.00001) {
            break;
        } else if (f(a) * f(c) > 0) {
            a = c;
        } else {
            b = c;
        }
        c_prev = c;
    } while (fabs(b - a) >= 0.00001);
    printf("The root is: %f\n", c);
    return 0;
}

