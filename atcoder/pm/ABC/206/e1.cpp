#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int l,r,t=0,ans=0;
    cin >> l >> r;
    vector<long long int> num(r,0);
    vector<long long int> cnt(r,0);

    for(int i = r/2;i > 1;i--){
        long long int k = 2*i;
        num[i] = r/i - (l-1)/i;
        cnt[i] = num[i]*(num[i]-1);
        while(k <= r/2){
            cnt[i] -= cnt[k];
            k += i;
        }
    }

    for(int i = 2;i <= r/2;i++){
        ans += cnt[i];
        if(i >= l){
            ans -= (num[i]-1)*2;
        }
    }

    cout << ans << endl;
    return 0;
}