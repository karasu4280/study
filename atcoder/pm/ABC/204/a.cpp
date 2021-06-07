#include<bits/stdc++.h>
using namespace std;

int main (){
    int x,y;
    cin >> x >> y;

    vector<int> n(3,0);

    n[x]++;
    n[y]++;

    if(n[y] == 2){
      cout << y << endl;
      return 0;
    }else{
      for(int i = 0;i < 3;i++){
        if(n[i] == 0){
          cout << i << endl;
          return 0;
        }
      }
    }
    return 0;
}
