#include<bits/stdc++.h>
using namespace std;

int main (){
  long long int n;
  long long int q;
  cin >> n;

  vector<long long int> a(n,0);
  vector<long long int> k(205,0);
  for(int i = 0;i < n;i++){
    cin >> a[i];
    q = a[i] / 200;
    a[i] = a[i] - q*200;
    //cout << a[i] << endl;
    k[a[i]]++;
  }

  long long int ans = 0;
  for(int i = 0;i < 201;i++){
    ans =  ans + (k[i] * (k[i] - 1)/2);
  }
  cout << ans << endl;
  return 0;


}
