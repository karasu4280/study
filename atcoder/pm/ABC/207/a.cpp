#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,ans = 0,min;
    cin >> a >> b >> c;

    min = a;

    if(b < min){
        ans += min;
        min = b;
    }else{
        ans += b;
    }
    if(c < min){
        ans += min;
        min = c; 
    }else{
        ans += c;
    }

    cout << ans << endl;
    return 0;
}