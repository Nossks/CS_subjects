#include <stdio.h>
float lagrange(float x[], float y[], int n, float val) {
    float ans = 0.0;
    for (int i = 0; i < n; i++) {
        float temp = 1.0; // Reset temp for each term
        for (int j = 0; j < n; j++) {
            if (i != j) {
                temp *= (val - x[j]) / (x[i] - x[j]);
            }
        }
        ans += temp * y[i];
    }
    return ans;
}
int main() {
    int n;
    printf("Enter number of data points: ");
    scanf("%d", &n);
    float x[n], y[n];
    printf("Enter values of x: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    printf("Enter corresponding values of y: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }
    float val;
    printf("Enter the value to interpolate: ");
    scanf("%f", &val);

    float result = lagrange(x, y, n, val);
    printf("Interpolated value at %.2f is %.4f\n", val, result);

    return 0;
}

