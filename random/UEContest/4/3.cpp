#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >>n;
  vector<int> a(n,0);
  vector<int> b(n,0);
  int c = 0,d = 0;

  for(int i = 0;i < n;i++){
    cin >> a[i];
    c += a[i];
  }
  for(int i = 0;i < n;i++){
    cin >> b[i];
    d += b[i];
  }


    if(c > d){
      cout << "No" << endl;
      return 0;
    }

  cout << "Yes" << endl;
  return 0;
}
