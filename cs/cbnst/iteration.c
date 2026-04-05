#include<stdio.h>
#include<math.h>
#include<float.h>
float f(float x){return cos(x) - 3 * x + 1;}

float fun(float x){
	return (cos(x)+1)/3;
}

void entr(float *a,float *b){
	printf("enetr inital value of a and b");
	scanf("%f %f",a,b);
	if(f(*a)*f(*b)<0)return ;
	entr(a,b);
}
int main(){
	float a,b,x,x_prev=FLT_MAX;
	int i=0;
	entr(&a,&b);
	x=(a+b)/2;
	while(fabs(x-x_prev)>.000001){
		printf("iteration %d: x is %.5f\n",i++,x);
		x_prev=x;
		x=fun(x);
	}
	printf("the root is %.5f",x);
}
