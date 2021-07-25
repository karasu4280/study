#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int n,k,t;
    cin >> n >> k;

    vector<pair<long long int,long long int>> a(n,{0,0});
    vector<long long int> c(n,0);

    for(int i = 0;i < n;i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(),a.end());
    /*for(int i = 0;i< n;i++){
        cout << a[i].first << endl;
        cout << a[i].second << endl;
    }*/

    t = k/n;
    k -= t*n;
    for(int i = 0;i < k;i++){
        c[a[i].second]++;
    }

    for(int i = 0;i < n;i++){
        cout << c[i]+t << endl;
    }


    return 0;
}