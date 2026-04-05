#include <stdio.h>
struct process {
    int at, bt, ct; // Arrival time, Remaining burst time, Completion time
    int original_bt; // Store the original burst time for calculations
    int wt, tat;    // Waiting time, Turnaround time
};

void sjs(struct process arr[], int n) {
    int cnt = 0, time = 0; 
    while (cnt < n) {
        int cur_pr = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i].ct == -1 && time >= arr[i].at) {
                if (cur_pr == -1 || arr[i].bt < arr[cur_pr].bt) {
                    cur_pr = i; 
                }
            }
        }
        // Execute the process
        if (cur_pr != -1) {
            arr[cur_pr].bt -= 1; 
            printf(" p%d ", cur_pr); 
            if (arr[cur_pr].bt == 0) { 
                arr[cur_pr].ct = time + 1; 
                cnt++; 
            }
        }
        time++; 
    }
}

int main() {
    struct process arr[5];
    // Input arrival time and burst time for each process
    for (int i = 0; i < 3; i++) {
        printf("Enter arrival and burst time for process %d: ", i);
        scanf("%d %d", &arr[i].at, &arr[i].bt);
        arr[i].original_bt = arr[i].bt; // Store original burst time
        arr[i].ct = -1; 
    }
    
    sjs(arr, 3);    
    
    printf("\nProcess\tAT\tBT\tCT\tWT\tTAT\n");
    for (int i = 0; i < 3; i++) {
        arr[i].tat = arr[i].ct - arr[i].at; // Turnaround time = Completion Time - Arrival Time
        arr[i].wt = arr[i].tat - arr[i].original_bt; // Waiting time = Turnaround Time - Original Burst Time
        printf("p%d\t%d\t%d\t%d\t%d\t%d\n", i, arr[i].at, arr[i].original_bt, arr[i].ct, arr[i].wt, arr[i].tat);
    }

    return 0;
}


