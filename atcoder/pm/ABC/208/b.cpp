#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int p,ans = 0;
    cin >> p;
    vector<long long int> a(100,1);
    for(int i = 1;i<100;i++){
        a[i] = a[i-1]*(i+1);
    }

    while(1){
        for(int i = 0;i < 100;i++){
            if(a[i] > p){
                p -= a[i-1];
                ans++;
                if(p == 0){
                cout << ans << endl;
                return 0;
                }
                break;
            }
            
        }
    }
    return 0;
}