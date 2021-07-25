#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int n,ans = 1;
    cin >> n;
    vector<long long int> c(n,0);
    for(int i = 0;i < n;i++){
        cin >> c[i];
    }
    sort(c.begin(),c.end());

    for(int i = 0;i < n;i++){
        ans = ans * (c[i] - i);
        ans = ans % 1000000007;
    }
    cout << ans << endl;
    return 0;
}