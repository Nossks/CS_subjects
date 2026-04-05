#include<stdio.h>
#include<string.h>
int main()
{
    int value=0;
    char str1[22]={'aryan'};
    char str2[33]={'nayra'};
    value=strcmp(str1,str2);
    if(value==0){
        printf("same");
    }
    else{
        printf("not same\n");
    }
//without inbuilt function
    int i=0,f=0;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
        if(str1[i]!=str2[i]){
                f=f+1;
                break;
        }
    }
    if(f==1){
            printf("not same");
        }
    return 0;
}
