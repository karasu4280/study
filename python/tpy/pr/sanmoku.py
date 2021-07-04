the_board = {'top-L':' ','top-M':' ','top-R':' ',
            'mid-L':' ','mid-M':' ','mid-R':' ',
            'low-L':' ','low-M':' ','low-R':' '}


def print_board(board):
    print(board['top-L'] + '|' + board['top-M'] + '|' + board['top-R'])
    print('-+-+-')
    print(board['mid-L'] + '|' + board['mid-M'] + '|' + board['mid-R'])
    print('-+-+-')
    print(board['low-L'] + '|' + board['low-M'] + '|' + board['low-R'])

print_board(the_board)

for i in range(9):
    print('place: ',end='')
    place = input()
    if(i %2 == 0):
        the_board[place] = 'X'
    else:
        the_board[place] = 'Y'
    print_board(the_board)
