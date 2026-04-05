#include<stdio.h>
void best_fit(int memory[],int process[],int n,int m){
	int ans=-1;
	for(int i=0;i<m;i++){		//process
		for(int j=0;j<n;j++){	//memory
			if(memory[j]>=process[i]){
				if(ans==-1){
					ans=j;
					break;
				}
			}
		}
		if(ans!=-1){
			printf("process number %d is located at memory address %d\n",i+1,ans+1);
			memory[ans]-=process[i];
		}
		else{
			printf("not free space"); 
			break;
		}
		ans=-1;
	}
}
int main(){
	int n,m;
	printf("enter the number of meenory blocks\n");
	scanf("%d",&n);
	int memory[n];
	printf("enter the memory space ");
	for(int i=0;i<n;i++){
		scanf("%d",&memory[i]);
	}
	printf("enter the number of process\n");
	scanf("%d",&m);
	int process[m];
	printf("enter the space required for that process ");
	for(int i=0;i<m;i++){
		scanf("%d",&process[i]);
	}
	best_fit(memory,process,n,m);
}
