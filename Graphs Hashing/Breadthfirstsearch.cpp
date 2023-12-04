#include<iostream>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,queue[10],front=0,rear=0,v;
int visit[10],visited[10];
int main()
{
int m;
cout <<"enterno of vertices";
cin >> n;
cout <<"enter no of edges";
cin >> m;
cout <<"\nEdges \n";
for(k=1;k<=m;k++)
{
cin >>i>>j;
cost[i][j]=1;
}
cout <<"enter initial vertex";
cin >>v;
cout <<"Visitied vertices\n";
cout << v<<endl;
visited[v]=1;
k=1;
while(k<n)
{
for(j=1;j<=n;j++)
{
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
queue[rear++]=j;
}
}
v=queue[front++];
cout<<v << " ";
k++;
visit[v]=0;
visited[v]=1;
}
}
