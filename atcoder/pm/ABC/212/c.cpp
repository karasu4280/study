#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int n,m;
    cin >> n >> m;

    vector<long long int> a(n,0);
    vector<long long int> b(m,0);
    map<long long int,int> t;

    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    
    for(int i = 0;i < m;i++){
        cin >> b[i];
        t[b[i]]++;
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    if(a[0] >= b[m-1]){
        cout << a[0]-b[m-1] << endl;
        return 0;
    }
    if(b[0] >= a[n-1]){
        cout << b[0]-a[n-1] << endl;
        return 0;
    }

    long long int kmax;
    kmax = max(b[m-1]-a[0],a[n-1]-b[0]);

    while(1){
        for(int j = 0;j < n;j++){
            if(a[j] >= i){
                if(t[a[j]+i] > 0 || t[a[j]-i] > 0){
                    cout << i << endl;
                    return 0;
                }
            }else{
                if(t[a[j]+i] > 0){
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}