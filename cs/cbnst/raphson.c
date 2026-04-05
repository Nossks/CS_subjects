#include<stdio.h>
#include<math.h>
#include<float.h>

float f(float x){return x*x*x-4*x-9;}

float df(float x){return 3*x*x-4;}

void entr(float *a,float *b){
	printf("enetr inital value of a and b");
	scanf("%f %f",a,b);
	if(f(*a)*f(*b)<0)return ;
	entr(a,b);
}

int main(){
	float a,b,x;
	float x_prev=FLT_MAX;
	int i=0;
	entr(&a,&b);
	x=(a+b)/2;
	while(fabs(x-x_prev)>0.000000000000001){
		printf("iteration %d: x is %.5f\n",i++,x);
		x_prev=x;
		x=x-f(x)/df(x);
	}
	printf("the root is %.6f",x);
}
