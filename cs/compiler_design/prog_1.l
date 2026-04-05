%{
#include<stdio.h>
int datatype=0,var=0,opr=0,lib=0;
%}

%%
"#include"                                           {lib++;}
[+*/=-]+                                             {opr++;}
"int"[ \t]+[a-zA-Z_]+[a-zA-Z_0-9]*                   {var++;datatype++;}
"float"[ \t]+[a-zA-Z_]+[a-zA-Z_0-9]*                 {var++;datatype++;}
.|\n                                                 {}
%%

int yywrap(){
    return 1;
}

int main(){
    FILE *f = fopen("io.c","r");
    yyin = f;
    yylex();
    printf("no of datatype %d\n",datatype);
    printf("no of var %d\n",var);
    printf("no of opr %d\n",opr);
    printf("no of lib %d",lib);
    return 0;
}