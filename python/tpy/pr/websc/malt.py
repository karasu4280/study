#! /usr/bin/python3

import webbrowser,sys,pyperclip



if len(sys.argv) > 1:
    #コマンドラインから住所を取得する
    address = ' '.join(sys.argv[1:])
else :
    #クリップボードから住所を習得する
    address = pyperclip.paste()



webbrowser.open('https://www.google.co.jp/maps/' + address)



