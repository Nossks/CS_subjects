#include <stdio.h>
double f(double x, double y) {
    return y + x;
}
void euler(double x0, double y0, double h, double xn) {
    double y=y0;
    while(x0<xn){
    	y=y0+h*f(x0,y0);
    	x0+=h;
    	y0=y;
    }
    printf("ans is %.3f",y);
}
int main() {
    double x0, y0, h, xn;
    printf("Enter initial x0, y0, step size h, and final x value xn: ");
    scanf("%lf %lf %lf %lf", &x0, &y0, &h, &xn);
    euler(x0, y0, h, xn);
    return 0;
}

