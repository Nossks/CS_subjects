#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char s[]){
    int i,n,count=0;
    n=strlen(s);
    int cn=0;
    for(i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count=count+1;
        }
        else if(s[i]>='1' && s[i]<='9'){
            cn=cn+1;
        }
    }
    printf("there are %d digits and %d vowels",cn,count);
}
void main(){
    int n;
    printf("enter size of string\n");
    scanf("%d",&n);
    char s[n];
    printf("enetr string\t\n");
    scanf("%s",&s);
    fun (s);
}