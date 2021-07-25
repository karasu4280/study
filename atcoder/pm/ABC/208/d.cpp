#include<bits/stdc++.h>
using namespace std;

long long int dkstr(vector<int> &num,vector<vector<pair<int,long long int>>> &g,long long int s,long long int t,long long int k){
    vector<long long int> st(400,100000000000);
    queue<int> tys;
    st[s] = 0;
    for(int i = 0;i < num[s];i++){
        if(g[s][i].first <= k){
            st[g[s][i].first] = min(st[s]+g[s][i].second,st[g[s][i].first]);
            tys.push(g[s][i].first);
        }
    }

    while(1){
        int h = 0,dmin = 100000000,tmp;
        if(tys.empty()){
            if(st[t] > dmin){
                return 0;
            }else{
                return st[t];
            }
        }

        h = tys.front();
        tys.pop();
        for(int i = 0;i < num[h];i++){
            if(g[h][i].first <= k || g[h][i].first == t){
                st[g[h][i].first] = min(st[h]+g[h][i].second,st[g[h][i].first]);
                if(g[h][i].first != t){
                    tys.push(g[h][i].first);
                }
            }
        }

    }
}

int main (){
    long long int n,m,ans = 0;
    cin >> n >> m;

    vector<vector<pair<int,long long int>>> g(n,vector<pair<int,long long int>>(n,{0,0}));
    vector<int> num(400,0);

    for(int i = 0;i < m;i++){
        long long int a,b,c;
        cin >> a >> b >> c;
        a--;
        b--;
        g[a][num[a]].first = b;
        g[a][num[a]].second = c;
        num[a]++;
    }

    /*for(int i = 0;i < g.size();i++){
        for(int l = 0;l < num[i];l++){
            cout << g[i][l].first << " " << g[i][l].second << endl;
        }
    }
    return 0;*/

    for(int k = 0;k < n;k++){
        for(int s = 0;s < n;s++){
            for(int t = 0;t < n;t++){
                if(s == t){
                    continue;
                }
                ans += dkstr(num,g,s,t,k);
            }
        }
    }

    cout << ans << endl;
    return 0;
}