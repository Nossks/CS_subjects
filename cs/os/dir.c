#include <stdio.h>
#include <dirent.h> 
int main(){
	struct dirent *txt;
	DIR *d=opendir("/home/cry-more/cs");
	if(d==NULL){
		printf("whoops");
		return 1;
	}
	printf("diretory contents\n");
	while((txt=readdir(d))!=NULL){
		printf("%s\n",txt->d_name);
	}
	closedir(d);
}
