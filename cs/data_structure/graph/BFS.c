#include <stdio.h>
#define SIZE 5
void enQueue(int);
int deQueue();
void display();
int items[SIZE], front = -1, rear = -1;
int isempty(){
    if(front==-1){
        return 1;
    }
    return 0;
}
int main() {
    int visited[]={0,0,0,0};
    int arr[4][4]={
       {0,0,1,0},{0,0,0,1},{1,0,0,1},{0,1,0,0}
    };
    int i=0;
    enQueue(i);
    printf("%d",i);
    while(!isempty()){
        int x=deQueue();
        for(int j=0;j<4;j++){
            if(arr[x][j]==1 && visited[j]==0){
                printf("%d",j);
                visited[j]=1;
                enQueue(j);
            }
        }
    }
  return 0;
}
void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    //printf("\nInserted -> %d", value);
  }
}
int deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    int x;
    x=items[front];
    //printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear){
      front = rear = -1;}
      return x;
  }
}
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}