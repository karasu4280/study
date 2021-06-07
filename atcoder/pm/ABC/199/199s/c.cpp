#include<bits/stdc++.h>
using namespace std;

int main (){
  long long int n,q,count = 0;
  char tmp;
  cin >> n;
  vector<char> fr(n,0);
  vector<char> ba(n,0);
  vector<int> tmpl(n,0);

  for(int i = 0;i < n;i++){
    cin >> fr[i];
  }
  for(int i = 0;i < n;i++){
    cin >> ba[i];
  }
  cin >> q;
  vector<int> t(q,0);
  vector<long long int> a(q,0);
  vector<long long int> b(q,0);

  for(int i = 0;i < q;i++){
    cin >> t[i];
    cin >> a[i];
    cin >> b[i];
  }

  for(int i = 0;i < q;i++){
    if(t[i] == 1){
      if(count % 2 == 0){
        if(a[i] > n){
          a[i] = a[i] - n -1;
          b[i] = b[i] - n -1;
          tmp = ba[a[i]];
          ba[a[i]] = ba[b[i]];
          ba[b[i]] = tmp;
        }else{
          a[i]--;
          if(b[i] > n){
            b[i] = b[i] -n-1;
            tmp = fr[a[i]];
            fr[a[i]] = ba[b[i]];
            ba[b[i]] = tmp;
          }else{
            b[i]--;
            tmp = fr[a[i]];
            fr[a[i]] = fr[b[i]];
            fr[b[i]] = tmp;
          }
        }
      }else{
        if(a[i] > n){
          a[i] = a[i] - n -1;
          b[i] = b[i] - n -1;
          tmp = fr[a[i]];
          fr[a[i]] = fr[b[i]];
          fr[b[i]] = tmp;
        }else{
          a[i]--;
          if(b[i] > n){
            b[i] = b[i] -n-1;
            tmp = ba[a[i]];
            ba[a[i]] = fr[b[i]];
            fr[b[i]] = tmp;
          }else{
            b[i]--;
            tmp = ba[a[i]];
            ba[a[i]] = ba[b[i]];
            ba[b[i]] = tmp;
          }
        }
      }
    }else{
      count++;
      /*for(int i = 0;i < n;i++){
        cout << fr[i];
      }
      for(int i = 0;i < n;i++){
        cout << ba[i];
      }
      cout << endl;*/
    }
  }

    if(count %2 == 0){
      for(int i = 0;i < n;i++){
        cout << fr[i];
      }
      for(int i = 0;i < n;i++){
        cout << ba[i];
      }
      cout << endl;
      return 0;
    }else{
      for(int i = 0;i < n;i++){
        cout << ba[i];
      }
      for(int i = 0;i < n;i++){
        cout << fr[i];
      }
      cout << endl;
      return 0;
    }
  }
