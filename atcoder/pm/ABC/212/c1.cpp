#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int n,m;
    cin >> n >> m;

    vector<long long int> a(n,0);
    vector<long long int> b(m,0);

    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long int min = 10000000000,cal,i=0,j=0;

    while(i < n && j < m){
        cal = abs(a[i]-b[j]);
        if(min >= cal){
            min = cal;
        }
        if(a[i] < b[j]){
            i++;
        }else{
            j++;
        }
    }
    cout << min << endl;
    return 0;
}