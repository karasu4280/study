#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int k,t;
    cin >> k;

    if(k == 1){
        cout << "1" << endl;
    }

    for(int i = 1;i < k;i++){
        t = i*i;
        t += i;
        if(t >= 2*k){
            cout << i <<endl;
            return 0;
        }
    }
    return 0;
}