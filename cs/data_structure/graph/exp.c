#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void bfs(int adj_matrix[SIZE][SIZE], int visited[SIZE], int start);

void enqueue(int value);
int dequeue();
int is_empty();
int items[SIZE], front = -1, rear = -1;

int main() {
    int visited[SIZE] = {0};
    int adj_matrix[SIZE][SIZE] = {
        {0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 0},
        {1, 0, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };

    int start_vertex = 0;
    
    printf("BFS Traversal starting from vertex %d: ", start_vertex);
    bfs(adj_matrix, visited, start_vertex);

    return 0;
}

void bfs(int adj_matrix[SIZE][SIZE], int visited[SIZE], int start) {
    visited[start] = 1;
    enqueue(start);

    while (!is_empty()) {
        int current_vertex = dequeue();
        printf("%d ", current_vertex);

        for (int i = 0; i < SIZE; i++) {
            if (adj_matrix[current_vertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
    printf("\n");
}

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("\nQueue is Full!!");
        exit(1);
    } else {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
    }
}

int dequeue() {
    if (front == -1) {
        printf("\nQueue is Empty!!");
        exit(1);
    } else {
        int x = items[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
        return x;
    }
}

int is_empty() {
    return front == -1;
}
