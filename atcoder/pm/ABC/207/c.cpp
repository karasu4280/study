#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,ans = 0;
    cin >> n;
    vector<int> t(n,0);
    vector<vector<int>> a(n,vector<int>(n,0));
    for(int i = 0;i < n;i++){
        cin >> t[i];
        cin >> a[i][0] >> a[i][1];
    }

    for(int i = 0;i < n;i++){
        long double a1,a2,b1,b2;
            if(t[i] == 1){
                a1 = a[i][0];
                b1 = a[i][1];
            }else if(t[i] == 2){
                a1 = a[i][0];
                b1 = a[i][1] - 0.1;
            }else if(t[i] == 3){
                a1 = a[i][0] + 0.1;
                b1 = a[i][1];
            }else{
                a1 = a[i][0] + 0.1;
                b1 = a[i][1] - 0.1;
            }
        for(int j = i+1;j < n;j++){
            if(t[j] == 1){
                a2 = a[j][0];
                b2 = a[j][1];
            }else if(t[j] == 2){
                a2 = a[j][0];
                b2 = a[j][1] - 0.1;
            }else if(t[j] == 3){
                a2 = a[j][0] + 0.1;
                b2 = a[j][1];
            }else{
                a2 = a[j][0] + 0.1;
                b2 = a[j][1] - 0.1;
            }

            if(a1 > b2){
                continue;
            }
            if(a2 > b1){
                continue;
            }

            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}