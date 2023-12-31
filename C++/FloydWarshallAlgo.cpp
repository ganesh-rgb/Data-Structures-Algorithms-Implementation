// You are using GCC
#include <iostream>
using namespace std;
// defining the number of vertices
#define nV 4
#define INF 999
void printMatrix(int matrix[][nV]);

// Implementing floyd warshall algorithm
void floydWarshall(int graph[][nV]) {
int matrix[nV][nV], i, j, k;

for (i = 0; i < nV; i++)
for (j = 0; j < nV; j++)
matrix[i][j] = graph[i][j];

// Adding vertices individually
for (k = 0; k < nV; k++) {
for (i = 0; i < nV; i++) {
for (j = 0; j < nV; j++) {
if (matrix[i][k] + matrix[k][j] < matrix[i][j])
matrix[i][j] = matrix[i][k] + matrix[k][j];
}
}
}
printMatrix(matrix);
}
void printMatrix(int matrix[][nV]) {
for (int i = 0; i < nV; i++) {
for (int j = 0; j < nV; j++) {
if (matrix[i][j] == INF)
cout<<"INF";
else
cout<<matrix[i][j]<<" ";
}
cout<<endl;
}
}

int main() {
int graph[nV][nV] = {{0, 8, INF, 1},
{INF, 0, 1, INF},
{4, INF, 0, INF},
{INF, 2, 9, 0}};
floydWarshall(graph);
}
