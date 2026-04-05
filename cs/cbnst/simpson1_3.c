#include<stdio.h>
float f(float x) {
    return 1/(1+x);
}
double simpson(float lower, float upper, int n) {
    if (n % 2 != 0) {
        return -1;
    }
    float h = (upper - lower) / n;
    double sum = 0;
    float x = lower;
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == n) {
            sum += f(x);
        } else if (i % 2 == 0) {
            sum += 2 * f(x);
        } else {
            sum += 4 * f(x);
        }
        x += h;
    }
    return (h / 3) * sum;
}
int main() {
    float lower, upper;
    int n;
    printf("Enter the lower limit: ");
    scanf("%f", &lower);
    printf("Enter the upper limit: ");
    scanf("%f", &upper);
    printf("Enter the number of intervals (even): ");
    scanf("%d", &n);
    double result = simpson(lower, upper, n);
    if (result != -1) {
        printf("%lf\n", result);
    }
    return 0;
}

