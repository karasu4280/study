#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c,d,r = 0,bl = 0;
    cin >> a >> b >> c >> d;
    
    bl += a;

    if(b > c*d){
        cout << -1 << endl;
        return 0;
    }

    for(int i= 0;i < 10000000;i++){
        if(bl <= r*d){
            cout << i << endl;
            return 0;
        }
        bl += b;
        r += c;
    }

    cout << -1 << endl;

    return 0;
}