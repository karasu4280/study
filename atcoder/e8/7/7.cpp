#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n,q;
    cin >> n;
    vector<long long int> nt(n,0);

    for(int i = 0;i < n;i++){
        cin >> nt[i];
    }
    cin >> q;
    vector<long long int> st(q,0);
    for(int i = 0;i < q;i++){
        cin >> st[i];
    }

    sort(nt.begin(),nt.end());

   
    for(int i = 0;i < q;i++){
        long long int right = n-1,left = 0,center;
        center = (right - left)/2;
        center += left;
        while(right > left){
            center = (right - left)/2;
            center += left;

            if(st[i] < nt[center]){
                right = center-1;
            }else if(st[i] > nt[center]){
                left = center+1;
            }else{
                right = 0;
            }
        }
        long long int min = 10000000000,lim = n;
        if(center < 5){
            center = 0;
            if(center + 10 >= lim){
                lim = n;
            }else{
                lim = center+10;
            }
        }else{
            center -= 5;
            if(center + 10 >= lim){
                lim = n;
            }else{
                lim = center+10;
            }
        }
        for(int j = center;j < lim;j++){
            if(min >= abs(nt[j] - st[i])){
                min = abs(nt[j] - st[i]);
            }
        }
        cout << min << endl;
    }
    return 0;

}