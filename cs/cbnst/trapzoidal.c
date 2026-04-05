#include<stdio.h>
float f(float x) {
    return 1 / x;
}
double trapezoidal(float lower, float upper, int n) {
    float h = (upper - lower) / n;
    double sum = 0;
    float x = lower;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n) {
            sum += f(x) / 2;  
        } else {
            sum += f(x);
        }
        x += h; 
    }
    return h * sum;
}
int main() {
    float lower, upper;
    int n;
    printf("Enter the lower limit: ");
    scanf("%f", &lower);
    printf("Enter the upper limit: ");
    scanf("%f", &upper);
    printf("Enter the number of intervals: ");
    scanf("%d", &n);
    double result = trapezoidal(lower, upper, n);
    printf("Result using Trapezoidal Rule: %lf\n", result);
    return 0;
}

