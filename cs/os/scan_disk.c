#include <stdio.h>
#include <stdlib.h>
int size=200;
int cmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);
}
void fun(int arr[], int n, int head,char ch) {
    int total = 0;
    int left[n],right[n];	
    int i=0,j=0;
    if(ch=='l'){
    	left[i++]=0;
    }
    else{
    	right[j++]=size-1;
    }
    for(int k=0;k<n;k++){
    	if(arr[k]<head){
    		left[i++]=arr[k];
    	}
    	else if(arr[k]>head){
    		right[j++]=arr[k];
    	}
    }
    qsort(left,i,sizeof(int),cmp);
    qsort(right,j,sizeof(int),cmp);
    int run=2;
    printf("seek seq : ");
    while(run--){
    	if(ch=='l'){
    		for(int k=i-1;k>=0;k--){
    			total+=abs(left[k]-head);
    			head=left[k];
    			printf("%d ",head);
    		}
    		ch='r';
    	}
    	else if(ch=='r'){
    		for(int k=0;k<j;k++){
    			total+=abs(right[k]-head);
    			head=right[k];
    			printf("%d ",head);
    		}
    		ch='l';
    	}
    }
    printf("\ntotal seek %d",total);
}

int main() {
    int n, head;
    printf("Enter number of tracks: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter track locations: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter initial head position: ");
    scanf("%d", &head);
    fun(arr, n, head,'l');
    return 0;
}

