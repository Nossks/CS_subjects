#include <stdio.h>
double f(double x, double y) {
    return y + (x*x);
}
void euler_modify(double x0, double y0, double h, double xn) {
    double y=y0;
    while(x0<xn){
    	double y_temp=y0+h*f(x0,y0);
    	y=y0+(h/2)*(f(x0,y0)+f(x0+h,y_temp));
    	x0+=h;
    	y0=y;
    	printf("at x %.4f y is %.4f\n",x0,y);
    }
}
int main() {
    double x0, y0, h, xn;
    printf("Enter initial x0, y0, step size h, and final x value xn: ");
    scanf("%lf %lf %lf %lf", &x0, &y0, &h, &xn);
    euler_modify(x0, y0, h, xn);
    return 0;
}

