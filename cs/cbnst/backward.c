#include <stdio.h>

float fact(int i) {
    if (i == 0 || i == 1) {
        return 1;
    }
    return i * fact(i - 1);
}

void fill(float y[][10], int n) {
    for (int j = 1; j < n; j++) {
        for (int i = n - 1; i >= j; i--) {
            y[i][j] = y[i][j - 1] - y[i - 1][j - 1];
        }
    }
    printf("\nDifference Table:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", y[i][j]);
        }
        printf("\n");
    }
}

float newton_backward(float x[], float y[][10], float val, int n) {
    fill(y, n);
    float h = x[1] - x[0];
    float u = (val - x[n - 1]) / h;
    float ans = y[n - 1][0];
    float u_term = 1;

    for (int i = 1; i < n; i++) {
        u_term *= (u + i - 1);
        ans += (u_term * y[n - 1][i]) / fact(i);
    }

    return ans;
}

int main() {
    int n;
    printf("Enter number of data points: ");
    scanf("%d", &n);

    float x[n], y[n][10];
    printf("Enter values of x: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter corresponding values of y: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &y[i][0]);
    }

    float value;
    printf("Enter the value to interpolate: ");
    scanf("%f", &value);

    float result = newton_backward(x, y, value, n);
    printf("\nInterpolated value at %.2f is %.4f\n", value, result);

    return 0;
}

