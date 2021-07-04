PASSWORDS = {'email':'qwertyuiop',
            'blog':'asdfghjkl',
            'luggage':'123'}

import sys
import pyperclip

if len(sys.argv) < 2:
    print('python pw.py [account]')
    sys.exit()

account = sys.argv[1]

if account in PASSWORDS:
    pyperclip.copy(PASSWORDS[account])
    print('done copy')
else:
    print('not account')

