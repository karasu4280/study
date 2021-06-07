#include<bits/stdc++.h>
using namespace std;



int main (){
  int n,tmp;
  cin >> n;
  vector<int> t(n,0);
  vector<long long int> rui(n,0);
  long long int sumall = 0,sum1 = 0,min,max;

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

  for(int i = 0;;i++){
    sum1 += t[i];
    if(sum1*2 >= sumall){
      tmp = i+1;
      sumall -= sum1;
      min = sum1 - sumall;
      break;
    }
  }

  /*cout << sumall << endl;
  cout << sum1 << endl;
  return 0;*/

  if(min == 0){
    cout << sumall << endl;
    return 0;
  }

  long long int keep;
  for(int bit = 0;bit < (1 << tmp);bit++){
    long long int sum = 0,a,b,k = 10;
    for(int i = 0;i < tmp;i++){
      if(bit & (1 << i)){
        sum += t[i];
      }
    }
    a = sumall + sum;
    b = sum1 - sum;

    if(abs(b-a) <= min){
      min = abs(b-a);
      keep = bit;
    }else if(abs(k) < abs(b-a) && k < 0){
      break;
    }
    k = b-a;
  }

  for(int i = 0;i < tmp;i++){
    if(keep & (1 << i)){
      sumall += t[i];
      sum1 -= t[i];
    }
  }

  if(sumall >= sum1){
    max = sumall;
  }else{
    max = sum1;
  }

  cout << max << endl;
  return 0;

}
