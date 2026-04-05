#include<stdio.h>
#include<string.h>
int main()
{
    int b,i=0;
    char gale[22]={'a','t','\0'};
    char dvl[22]={'e','\0'};
    strcat(gale,dvl);
    printf("%s \n",gale);
    // without inbuit function
    b=strlen(gale);
    while(gale[b+1]<=gale[22]){
        gale[b+1]=dvl[i];
        i++;
    }
    printf("%s",gale);
    return 0;
}

