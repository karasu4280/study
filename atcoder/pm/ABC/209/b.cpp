#include<bits/stdc++.h>
using namespace std;

int main (){
    int n,x,sum = 0;
    cin >> n >> x;
    vector<int> a(n,0);
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(i % 2 == 1){
            a[i]--;
        }
        sum += a[i];
    }

    if(x >= sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}