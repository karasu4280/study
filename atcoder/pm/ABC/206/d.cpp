#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int n,ans = 0,tmp;
    cin >> n;
    vector<long long int> a(n,0);
    vector<long long int> h(200005,-1);

    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    for(int i = 0;i <= (n-1)/2;i++){
        long long int y = a[i];
        tmp = a[i];
        while(h[y] > 0){
            y = h[y];
        }
        if(y != tmp){
            h[tmp] = y;
        }
        if(y != a[n-1-i]){
            long long int t = a[n-1-i];
            tmp = t;
            while(h[t] > 0){
                t = h[t];
            }
            if(t != tmp){
                h[tmp] = t;
            }
            if(y != t){
                h[t] = y;
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
    
}