#include <stdio.h>
#include <string.h>
int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
	char str[22];
	scanf("%s",str);
	int l;
	l=strlen(str);
    int i,x=0,y=0;
	for(i=0;i<=l;i++){
		if(str[i]=='z'){
			x=x+1;
		}
		else if(str[i]=='o'){
            y=y+1;
		}
	}
	printf("%d %d",x,y);
	if(2*x==y){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
