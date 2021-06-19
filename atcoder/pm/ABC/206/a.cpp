#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >>n;
    double k;
    k = 1.08*n;
    int t;
    t = k;

    if(t < 206){
        cout << "Yay!" << endl;
    }else if(t == 206){
        cout << "so-so" << endl; 
    }else{
        cout << ":(" << endl;
    }
    return 0;
}