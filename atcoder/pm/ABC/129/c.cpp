#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main (){
    int n,m,t=0;
    cin >> n >> m;
    vector<int> b(n,0);
    for(int i = 0;i < m;i++){
        cin >> b[i];
        b[i]--;
    }

    vector<long long int> k(n,0);

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    k[0] = 1;
    k[1] = 2;

    if(b[t] == 0 && m != 0){
      k[0]--;
      k[1]--;
      t++;  
    }
    if(b[t] == 1 && m != 0){
        k[1] = 0;
        t++;
    }

    for(int i = 2;i < n;i++){
        k[i] = k[i-2] + k[i-1];
        k[i] = k[i] % MOD;
        if(i == b[t] && m != 0){
            k[i] = 0;
            t++;
        }
    }
    cout << k[n-1] << endl;
    return 0;

}