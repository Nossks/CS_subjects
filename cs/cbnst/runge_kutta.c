#include <stdio.h>
double f(double x, double y) {
    return (y*y) +x;
}
void rk(double x0, double y0, double h, double xn) {
    double y=y0;
    while(x0<xn){
        double k1,k2,k3,k4,k;
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(1.0/6.0)*(k1+2*k2+2*k3+k4);
    	y=y0+k;
    	x0+=h;
    	y0=y;
    	printf("at x %.4f y is %.4f\n",x0,y);
    }
}
int main() {
    double x0, y0, h, xn;
    printf("Enter initial x0, y0, step size h, and final x value xn: ");
    scanf("%lf %lf %lf %lf", &x0, &y0, &h, &xn);
    rk(x0, y0, h, xn);
    return 0;
}

