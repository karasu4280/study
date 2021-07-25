#include<bits/stdc++.h>
using namespace std;


int main (){
    long long int n,qw,dmax = 0,hs;
    cin >> n >> qw;
    vector<vector<int>> g(n);
    vector<int> past(n,0);
    vector<vector<int>> mn(n,vector<int>(n,0));
    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int h = q.front();
        q.pop();
        for(int i = 0;i < g[h].size();i++){
            if(past[g[h][i]] == 0){
                q.push(g[h][i]);
                past[g[h][i]] = past[h]+1;
            }
        }
    }
    for(int i = 0;i < n;i++){
        if(past[i] >= dmax){
            dmax = past[i];
            hs = i;
        }
        past[i] = 0;
    }
    q.push(hs);
    while(!q.empty()){
        int h = q.front();
        q.pop();
        for(int i = 0;i < g[h].size();i++){
            if(past[g[h][i]] == 0){
                q.push(g[h][i]);
                past[g[h][i]] = past[h]+1;
            }
        }
    }
    for(int i = 0;i < qw;i++){
        int c,d;
        cin >> c >> d;
        c--;
        d--;
        mn[i][0] = c;
        mn[i][1] = d;
    }

    for(int i = 0;i < qw;i++){
        int l,dis1,dis2;
        dis1 = max(past[mn[i][0]],past[mn[i][1]]);
        dis2 = min(past[mn[i][0]],past[mn[i][1]]);
        l = dis1-dis2;
        if(l % 2 == 0){
            cout << "Town" << endl;
        }else{
            cout << "Road" << endl;
        }
    }
    return 0;
}