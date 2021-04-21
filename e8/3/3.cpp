#include<bits/stdc++.h>
using namespace std;

int pmax = 0;

void bfs(vector<vector<int>> &g,vector<int> &l,int here,int t){//g:= graph,here:= genzaiti,t:= nagasa
  t++;
  if(l[here] > 0){
    for(int i = l[here]-1;i >= 0;i--){//hairetugai sanyou husegu
      vector<vector<int>> tmp = g;//graph copy
      vector<int> lcp = l;
      tmp[here].erase(tmp[here].begin() + i);
      for(int k = 0;k < l[g[here][i]];k++){
        if(tmp[g[here][i]][k] == here){
          tmp[g[here][i]].erase(tmp[g[here][i]].begin() + k);
        }
      }//miti sakuzyo
      lcp[here]--;
      lcp[g[here][i]]--;
      bfs(tmp,lcp,g[here][i],t);
    }
  }else{
      if(t >= pmax){
        pmax = t;
      }
    }
  }

int main(){
  int n,a,b;
  cin >> n;
  vector<vector<int>> g(n,vector<int>(n,0));
  vector<int> l(n,0);

  for(int i = 0;i < n-1;i++){
    cin >> a >> b;
    a--;
    b--;
    g[a][l[a]] = b;
    g[b][l[b]] = a;
    l[a]++;
    l[b]++;
  }

  /*for(int i = 0;i < n;i++){
    for(int k = 0;k < l[i];k++){
      cout << g[i][k];
    }
    cout << endl;
  }graph nakami kakunin*/

  for(int i = 0;i < n;i++){
    if(l[i] == 1){
      bfs(g,l,i,0);
    }
  }

  cout << pmax << endl;


  return 0;
}
