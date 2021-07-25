#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long int ans = 0;

void cnt (vector<vector<int>>& s,int i,int here,long long int c){
    if(i == -1){
        ans += c;
    }else{
        int a = s[i].size();
        int left = 0,right = a-1;
        int flag=1;

        if(a == 1){
            c *= 1;
                cnt(s,i-1,s[i][0],c);
        }else if(a == 2){
            if(s[i][1] > here){
                    c *= 1;
                cnt(s,i-1,s[i][0],c);
            }else{
                    if(i == 0){
                    c *= a;
                    c = c % MOD;
                    }
                for(int l = 0;l < a;l++){
                cnt(s,i-1,s[i][l],c);
                }
            }
        }else{
            while(right >= left){
                int center = (right - left + 1) / 2;
                center += left;

                if(s[i][center] > here){
                    if(s[i][center-1] <= here){
                        if(i == 0){
                        c *= (center);
                        c = c % MOD;
                        }
                        for(int l = 0;l < center-1;l++){
                        cnt(s,i-1,s[i][l],c);
                        }
                        break;
                    }else{
                        right = center-1;
                    }
                }else{
                    if(s[i][center+1] > here){
                        if(i == 0){
                        c *= (center+1);
                        c = c % MOD;
                        }
                        for(int l = 0;l < center;l++){
                        cnt(s,i-1,s[i][l],c);
                        }
                        break;
                    }else{
                        left = center+1;
                    }
                }
            }
        }

        
    }
}

int main (){
    string s;
    cin >> s;
    int flag=0;

    vector<vector<int>> c(9);

    long long int y = s.size();
    long long int tmp;

    for(int i = 0;i < y;i++){
        flag = 0;
        if(s[i] == 'c'){
            c[0].push_back(i);
        }
        if(s[i] == 'h'){
            c[1].push_back(i);
        }
        if(s[i] == 'o'){
            c[2].push_back(i);
        }
        if(s[i] == 'k'){
            c[3].push_back(i);
        }
        if(s[i] == 'u'){
            c[4].push_back(i);
        }
        if(s[i] == 'd'){
            c[5].push_back(i);
        }
        if(s[i] == 'a'){
            c[6].push_back(i);
        }
        if(s[i] == 'i'){
            c[7].push_back(i);
            flag = 7;
        }
        
        if(flag == 7){
            cnt(c,flag-1,i,1);
        }
    }


    cout << ans << endl;
    return 0;
}