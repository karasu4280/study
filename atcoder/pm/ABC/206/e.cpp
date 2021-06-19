#include<bits/stdc++.h>
using namespace std;

int main (){
    long long int l,r,t=0,ans=0;
    cin >> l >> r;

    vector<long long int> prime(r,0);
    prime[t] = 2;
    t++;

    for(int i = 3;i <= r/2;i++){
        for(int k = 0;k < t;k++){
            if(i % prime[k] == 0){
                break;
            }
            if(k == t-1){
                prime[t] = i;
                t++;
            }
        }
    }

    for(int i = 0;i < t;i++){
        long long int num1,num2;
        num1 = l / prime[i];
        num2 = r / prime[i];
        num1 = num2 - num1;
        if(l % prime[i] == 0){
            num1++;
        }
        num2 = num1*(num1-1);
        num2 = num2/2;
        ans += num2;
    }

    for(int i = l;i <= r/2;i++){
        long long int num1,num2 = 0;
        num1 = r / i;
        num1--;
        for(int o = 0;o < t;o++){
            if(i % prime[o] == 0){
                num2++;
            }
        }
        num2 = num2*(num2-1);
        num2 = num2/2;
        num1 = num1*num2;
        ans -= num1;
    }
    ans = ans *2;

    cout << ans << endl;
    return 0;
}