import random

num = random.randint(0,100)
num = int(num)
unum = 1000
print(num)

while(num != unum):
    print("yournum? : ",end='')
    unum = input()
    unum = int(unum)
    if unum < num:
        print('num is larger than your input')
    elif unum > num:
        print('num is smaller than your input')

print('accept!')
num = str(num)
print('num is ' + num)
