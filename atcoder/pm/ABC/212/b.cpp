#include<bits/stdc++.h>
using namespace std;

int main (){
    string s;
    char tmp;
    int cnt = 0,flag = 0;

    cin >> s;

    tmp = s[0];
    for(int i = 1;i < 4;i++){
        if(tmp == s[i]){
            cnt++;
        }
    }
    if(cnt == 3){
        cout << "Weak" << endl;
        return 0;
    }

    for(int i = 0;i < 3;i++){
        if(s[i+1] == s[i]+1){
            flag++;
        }
        if(s[i] == '9' && s[i+1] == '0'){
            flag++;
        }
    }
    if(flag == 3){
        cout << "Weak" << endl;
        return 0;
    }

    cout << "Strong" << endl;
    return 0;

}