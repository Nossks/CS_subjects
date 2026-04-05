#include<stdio.h>
#include<string.h>
int main()
{
    char str[33];
    char str1[44];
    int k=0;
    int i,c,j;
    printf("enter the string :");
    //scanf("%c",&str);
    gets(str);
    puts(str);
    j=strlen(str);
    //c=0;
   // while(str[c]!='\0'){
     //   j++;
       // c++;
    //}
    printf("size of string %d \n",j);
    for (i=0;i<=j;i++){
        if(str[i]==' '){
            //str1[i]=str[i+1];
            printf("%c",str[i+1]);
        }
}
printf("\n");
printf("Above are the alphabets are");
return 0;
}
