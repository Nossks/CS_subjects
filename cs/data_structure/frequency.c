#include<stdio.h>
void main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int fr[n],count;
	for(i=0;i<n;i++){
		count=1;
		if(arr[i]!=-1){
			for(j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					count++;
					arr[j]=-1;
				}
			}
			fr[i]=count;
		}
	}
    int ar[n];
    for(i=0;i<n;i++){
        if(arr[i]!=-1){
            ar[i]=fr[i];
        }
    }
    int x;
    x=sizeof(arr)/sizeof(int);
    printf("%d",x);
    for(i=0;i<x;i++){
        printf("%d\t",ar[i]);
        }
}