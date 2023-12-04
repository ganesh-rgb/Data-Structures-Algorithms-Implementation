#include<iostream>
#define n 4 
using namespace std;

void warshall(int g[][n])
{
    int i,j,k;
    for(i=0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            g[i][j] = ((g[i][k] && g[k][j]) || g[i][j]);
        }
    }
}

for(int i = 0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        cout << g[i][j] << "\t";
        
        cout << endl;
        
    }
}

int main()
{
    int g[n][n] = {
        {0,1,0,1},
        {0,0,0,1},
        {0,0,0,0},
        {1,0,1,0},
        
    };
    warshall(g);
    
}
