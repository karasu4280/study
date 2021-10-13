#! usr/bin/python3
#入力されたurlの*を置換して連番のurlを作成し、取得する。

import requests,bs4

print ('urlを入力、その際連番にしたいなら数字の部分を*とする事')
url_origin = input() #urlを入力させる

#連番があるか把握
isast = url_origin.find('*') #*を探す
if isast == -1 :
    print('連番なし')
else :
    print('連番の始点は？')
    rbfrom = input() #連番の始点
    print('終点は？')
    rbto = input() #連番の終点

#入力されたurlのwebページを取得し、画像を保存する関数
def getimagefromweb(targeturl) :
    websource = requests.get(targeturl)
    websource_soup = bs4.BeautifulSoup(websource.text) #Beautifulsoupオブジェクトに変換
    




