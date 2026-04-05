#include<stdio.h>
#define SIZE 5
    int visited[SIZE] = {0};
    int adj_matrix[SIZE][SIZE] = {
        {0, 0, 0, 0, 0},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 0},
        {1, 0, 0, 0, 1},
        {0, 0, 0, 1, 0}
    };
void dfs(int node){
    printf("%d ", node);
    visited[node] = 1;
    for (int j = 0; j < SIZE; j++) {
        if (adj_matrix[node][j] == 1 && !visited[j]) {
            dfs(j);
        }
    }
}
int main() {
    dfs(4);
    return 0;
}
