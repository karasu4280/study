#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int q;
    cin >> q;
    vector<long long int> g;
    long long int kk = 0,tmp,ps = 0,flag=0;

    for(int i = 0;i < q;i++){
        int a,b;
        cin >> a;

        if(a <= 2){
            cin >> b;
        }

        if(a == 1){
            g.push_back(b);
        }else if(a == 2){
            kk += b;
        }else{
            if(ps != 3){
                sort(g.begin(),g.end(),greater<long long int>());
            }
            tmp = g[g.size()-1];
            g.pop_back();
            tmp = tmp + kk;
            if(kk != 0){
                for(int i = 0;i < g.size();i++){
                    g[i] += kk;
                }
                kk = 0;
            }
            cout << tmp << endl;
        }
        ps = a;
    }
    return 0;
}