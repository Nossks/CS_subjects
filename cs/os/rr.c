#include <stdio.h>

struct process {
    int at, bt, ct;          
    int original_bt;         
    int wt, tat;            
};

void round_robin(struct process arr[], int n, int tq) {
    int time = 0, completed = 0;
    int queue[1000], front = 0, rear = 0;  // Queue for Round Robin
    int visited[n];
    
    // Initialize the visited array and enqueue the first process
    for (int i = 0; i < n; i++) visited[i] = 0;
    queue[rear++] = 0; // Start with the first process
    visited[0] = 1;
    while(completed<n){
    	if(front<rear){
    		int cur_pr=queue[front++];
    		int exec_time=arr[cur_pr].bt>=tq?tq:arr[cur_pr].bt;
    		time+=exec_time;
    		arr[cur_pr].bt-=exec_time;
    		if(arr[cur_pr].bt==0){
    			arr[cur_pr].ct=time;
    			completed++;
    		}
    		for(int i=0;i<n;i++){
    			if(!visited[i] && arr[i].at<=time && arr[i].bt>0 && cur_pr!=i){
    				visited[i]=1;
    				queue[rear++]=i;
    			}
    		}
    		if(arr[cur_pr].bt>0)queue[rear++]=cur_pr;
    	}else{
    		time++;
    		for(int i=0;i<n;i++){
    			if(!visited[i] && arr[i].at<=time && arr[i].bt>0){
    				visited[i]=1;
    				queue[rear++]=i;
    			}
    		}
    	}
    }
}

int main() {
    int n, tq;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter time quantum: ");
    scanf("%d", &tq);
    
    struct process arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter arrival time and burst time for process %d: ", i);
        scanf("%d %d", &arr[i].at, &arr[i].bt);
        arr[i].original_bt = arr[i].bt; 
        arr[i].ct = -1; 
    }
    
    round_robin(arr, n, tq);
    
    printf("\nProcess\tAT\tBT\tCT\tWT\tTAT\n");
    for (int i = 0; i < n; i++) {
        arr[i].tat = arr[i].ct - arr[i].at; 
        arr[i].wt = arr[i].tat - arr[i].original_bt; 
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n", i, arr[i].at, arr[i].original_bt, arr[i].ct, arr[i].wt, arr[i].tat);
    }

    return 0;
}

