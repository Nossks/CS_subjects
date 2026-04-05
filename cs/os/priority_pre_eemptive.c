#include <stdio.h>

struct process {
    int at, bt, ct;          
    int original_bt;        
    int wt, tat;           
    int prior;             
};
void priority(struct process arr[], int n) {
    int cnt = 0, time = 0; 
    while (cnt < n) {
    	int cur_pr=-1;
        for(int i=0;i<n;i++){
        	if(arr[i].ct==-1 && arr[i].at<=time){
        		if(cur_pr==-1 || arr[cur_pr].prior<arr[i].prior){
        			cur_pr=i;
        		}
        		else if(arr[cur_pr].prior==arr[i].prior){
        			if(arr[cur_pr].at > arr[i].at || (arr[cur_pr].at == arr[i].at && arr[cur_pr].bt > arr[i].bt)){
        				cur_pr=i;
        			}
        		}
        	}
        }
        if(cur_pr!=-1){
        	arr[cur_pr].bt-=1;
        	printf("p%d ",cur_pr);
        	if(arr[cur_pr].bt==0){
        		arr[cur_pr].ct=time+1;
        		cnt++;
        	}
        }
        time++;
    }
}

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    
    struct process arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time, burst time, and priority for process %d: ", i);
        scanf("%d %d %d", &arr[i].at, &arr[i].bt, &arr[i].prior);
        arr[i].original_bt = arr[i].bt; 
        arr[i].ct = -1; 
    }
    
    priority(arr, n);    
    
    printf("\nProcess\tAT\tBT\tCT\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        arr[i].tat = arr[i].ct - arr[i].at; 
        arr[i].wt = arr[i].tat - arr[i].original_bt; 
        printf("p%d\t%d\t%d\t%d\t%d\t%d\n", i, arr[i].at, arr[i].original_bt, arr[i].ct, arr[i].wt, arr[i].tat);
    }

    return 0;
}

