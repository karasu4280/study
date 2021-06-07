#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >> n;
  long long int q;
  vector<long long int> a(n,0);
  vector<vector<int>> p(n,vector<int>(n,0));
  vector<int> k(205,0);
  vector<int> x(n,0);
  vector<int> y(n,0);
  vector<int> t(n, 0);
  int lx =0,ly=0;
  string s;
  for(int i = 0;i < n;i++){
    cin >> a[i];
    q = a[i]/200;
    a[i] = a[i] - q*200;
    if(k[a[i]] != 0){
      cout << "Yes" << endl;
      cout << "1 " << i+1 <<endl;
      cout << "1 " << p[a[i]][0]+1 << endl;
      return 0;
    }else{
      k[a[i]]++;
      p[a[i]].push_back(i);
      t[i] = a[i];
    }
  }

  for(int bit  = 0;bit < pow(3,n);bit++){

  }



}
