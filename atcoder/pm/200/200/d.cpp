#include<bits/stdc++.h>
using namespace std;

int main (){
  int n;
  cin >> n;
  long long int q;
  vector<long long int> a(n,0);
  vector<vector<int>> p(205,vector<int>(20,0));
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
    //cout << a[i] << endl;
    if(k[a[i]] != 0){
      cout << "Yes" << endl;
      cout << "1 " << i+1 <<endl;
      cout << "1 " << p[a[i]][0]+1 << endl;
      return 0;
    }else{
      k[a[i]]++;
      p[a[i]][0] = i;
      t[i] = a[i];
    }
  }

for(int i = 0;i < 201;i++){
  k[i] = 0;
  for(int w = 0;w < 20;w++){
    p[i][w] = 0;
  }
}

vector<int> zts(10,0);
int count = 0;

for(int i = 0;i < n;i++){
  count++;
  if(i == 8){
    count = 8;
    break;
  }
  zts[i] = a[i];
}

for(int bit = 1;bit < (1 << count);bit++){
  q = 0;
  lx = 0;
  ly = 0;
  for(int i = 0;i < count;i++){
    if(bit & (1 << i)){
      q += zts[i];
      while(q >= 200){
        q -= 200;
      }
      if(q < 0){
        q += 200;
      }
      x[lx] = i+1;
      lx++;
    }
  }
  if(k[q] == 0){
    k[q]++;
    for(int i = 0;i < lx;i++){
      p[q][i] = x[i];
    }
  }else{
    for(int i = 0;i < 10;i++){
      y[ly] = p[q][i];
      ly++;
      if(y[i] == 0){
        ly--;
        break;
      }
    }
    //cout << bit << endl;
    cout << "Yes" << endl;
    cout << lx;
    for(int i = 0;i < lx;i++){
      cout << ' ' << x[i];
    }
    cout << endl;
    cout << ly;
    for(int i = 0;i < ly;i++){
      cout << ' ' << y[i];
    }
    cout << endl;
    return 0;
  }
}
cout << "No" << endl;
return 0;

}
