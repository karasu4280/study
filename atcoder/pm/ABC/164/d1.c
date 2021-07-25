#include<stdio.h>
#include<string.h>

int main (){
    //文字列全体を各桁の数値が足しあわされていると考える。
    //各桁の数値に対して2019の余剰の累積和をとる。
    //各桁の累積和が等しいペアをとると2019の余剰が0になる。
    char s[200010];
    scanf("%s",s);

    int len = strlen(s);//入力された文字列の文字数
    int i,mul = 1,tmp,ans = 0;
    int modcount[2019];//累積和をとったときの余剰の数を数える
    int mod2019[200010];//各桁に対する2019の余剰を格納
    for(i = 0;i < 2019;i++){//配列の初期化
        mod2019[i] = 0;
    }
    for(i = len-1;i >= 0;i--){//各桁の余剰を求める
        tmp = (s[i] - '0')*mul % 2019;
        mod2019[i] = tmp;
        mul = mul*10 % 2019;
    }

    //余剰の累積和を求める
    tmp = 0;//初期化
    for(int i = 0;i < len;i++){
        tmp += mod2019[i];
        tmp = tmp % 2019;
        modcount[tmp]++;
    }
    
    //余剰の累積和のペアを数える
    for(i = 0;i < 2019;i++){
        ans += (modcount[i] * (modcount[i]-1))/2;
    }
    ans += modcount[0];//単体で2019の倍数になるものを足す

    printf("%d\n",ans);
    return 0;
}