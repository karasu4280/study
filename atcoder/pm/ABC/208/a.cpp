#include<bits/stdc++.h>
using namespace std;

int main (){
    int a,b;
    cin >> a >> b;
    if(b <= 6*a && b >= a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}