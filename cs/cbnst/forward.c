#include <stdio.h>
#include <math.h>
#include <float.h>
float fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
void forward_diff(float x[], float y[][10], int n) {
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }
    printf("The forward difference table is:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f", x[i]);
        for (int j = 0; j < n - i; j++) {
            printf("\t%.2f", y[i][j]);
        }
        printf("\n");
    }
}
float newton_forward(float x[], float y[][10], float value, int n) {
    forward_diff(x, y, n);
    float sum = y[0][0];
    float h = x[1] - x[0];
    float u = (value - x[0]) / h;
    float u_term=1;
    for (int i = 1; i < n; i++) {
    	u_term*=(u-i+1);
        sum += (u_term* y[0][i]) / fact(i);
    }
    return sum;
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
    
    float result = newton_forward(x, y, value, n);
    printf("\nInterpolated value at %.2f is %.4f\n", value, result);
}

