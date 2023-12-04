#include<iostream>
#define n 4
using namespace std;
void Warshall(int g[][n])
{
int i,j,k;
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++){
g[i][j]=((g[i][k] && g[k][j]) || g[i][j]);}}}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
cout<<g[i][j]<<"\t";}
cout<<endl;}}
int main(){
int g[n][n]={
{0, 1, 0, 1},
{0, 0, 0, 1},
{0, 0, 0, 0},
{1, 0, 1, 0}
};
Warshall(g);
}
