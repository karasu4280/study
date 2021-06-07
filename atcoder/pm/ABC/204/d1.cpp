#include<bits/stdc++.h>
using namespace std;



int main (){
  int n,tmp;
  cin >> n;
  vector<int> t(n,0);
  vector<long long int> rui(n,0);
  long long int sumall = 0,sum1 = 0,min = 1000000000,max;

  for(int i = 0;i < n;i++){
    cin >> t[i];
    sumall += t[i];
  }

  sort(t.begin(),t.end());

  /*for(int i = 0;i < n;i++){
    cout << t[i] << endl;
    cout << rui[i] << endl;
  }
  return 0;*/


  long long int keep;
  for(int bit = 0;bit < (1 << n);bit++){
    long long int sum = 0;
    for(int i = 0;i < n;i++){
      if(bit & (1 << i)){
        sum += t[i];
      }
    }
    sum1 = sumall - sum;

    if(abs(sum-sum1) < min){
      min = abs(sum-sum1);
      keep = bit;
    }
  }

  long long int sum = 0;
  for(int i = 0;i < n;i++){
    if(keep & (1 << i)){
      sum += t[i];
    }
  }
  sum1 = sum;
  sumall -= sum;

  if(sumall >= sum1){
    max = sumall;
  }else{
    max = sum1;
  }

  cout << max << endl;
  return 0;

}
