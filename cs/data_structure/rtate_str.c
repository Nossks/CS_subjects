#include<stdio.h>
int main(){
    char s[]="abcde";
    char goal[]="cdeab";
    for(int j=0;j<4;j++){
        char temp=s[0];
        for(int i=1;i<5;i++){
            s[i-1]=s[i];
        }
        s[5-1]=temp;
        int k=0;
        for(int i=0;i<5;i++){
            if(s[i]==goal[i]){
                k++;
            }
        }
        if(k==5){
            printf("true");
        }
    }
    //printf("%s",s);
    printf("false");
}