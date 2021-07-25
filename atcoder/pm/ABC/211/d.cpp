#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

void dik(vector<vector<int>>& g,vector<long long int>& st){
    queue<int> next;
    int here;
    st[0] = 0;
    next.push(0);
    
    while(!next.empty()){
        here = next.front();
        next.pop();
        for(int i = 0;i < g[here].size();i++){
            if(st[g[here][i]] == -1){
                next.push(g[here][i]);
                st[g[here][i]] = st[here] + 1;
            }
        }
    }
}

int main (){
    long long int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n,vector<int>());
    vector<long long int> st(n,-1);
    vector<long long int> dp(n,0);
    vector<pair<long long int,int>> od(n,{0,0});

    for(int i = 0;i < m;i++){
        long long int a,b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dik(g,st);

    for(int i = 0;i < n;i++){
        od[i].first = st[i];
        od[i].second = i;
    }

    sort(od.begin(),od.end());

    dp[0] = 1;
    for(int i = 1;i < n;i++){
        int here = od[i].second;
        for(int j = 0;j < g[here].size();j++){
            if(st[here]-1 == st[g[here][j]]){
                dp[here] += dp[g[here][j]];
                dp[here] = dp[here] % MOD;
            }
        }
    }

    cout << dp[n-1] << endl;

    return 0;
}