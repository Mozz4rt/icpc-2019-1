#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;

int n,k,valor[MAXN];
vector<int> adj[MAXN];

int dfs(int u){
    for(int i = 0; i<adj[u].size();i++){
        int v = adj[u][i];
        valor[v] = dfs(adj[u][i]);
    }
    return valor[u]+1;
}

int main(void){

}