%{
#include<stdio.h>
int num=0,iden=0,opr=0;
%}

%%
[0-9]+   {num++;printf("NUMBER %s\n",yytext);}
[a-zA-Z]+   {iden++;printf("identifier %s\n",yytext);}
[+-/*]+   {opr++;printf("OPerator %s\n",yytext);}
.		{ }
%%

int main(){
	//take input from file io.c
	FILE *file=fopen("io.c","r");
	yyin=file;
	yylex();
	printf("total tokens %d",num+iden+opr);
}

int yywrap() {return 1;}
