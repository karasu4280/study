#include<bits/stdc++.h>
using namespace std;

void search(vector<vector<int>> &g,vector<int> &cnt,int h){
  int n;
  int k = g[h].size();

  for(int i = k-1;i >= 0;i--){
    n = g[h][i];
    cnt[n]++;
    g[h].pop_back();
    search(g,cnt,n);
  }
}

int main (){
  long long int n,m,ans = 0;
  cin >> n >> m;

  vector<vector<int>> g(n,vector<int>());
  vector<vector<int>> z(n,vector<int>());

  for(int i = 0;i < m;i++){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
  }

  z = g;

  for(int i = 0;i < n;i++){
    vector<int> cnt(n,0);
    cnt[i]++;
    g = z;
    search(g,cnt,i);
    for(int i = 0;i < n;i++){
      if(cnt[i] > 0){
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;

}
