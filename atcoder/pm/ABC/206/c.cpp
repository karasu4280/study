#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int n,k,ans = 0,p;
    cin >> n;
    vector<int> c(n,0);


    for(int i = 0;i < n;i++){
        cin >> c[i];
    }

    sort(c.begin(),c.end());

    for(int i = 0;i < n;i++){
        int k = i;
        while(c[i] == c[k]){
            k++;
        }

        p = (n-k);
        p = p*(k-i);

        ans += p;
        i = k-1;
    }

    cout << ans << endl;
    return 0;
    
  
}