#
#
#    ____  ____        __          ____    ____     ____    ____
#   |_  _||_  _|      /  \        |_   \  /   _|   |_   \  /   _|
#     \ \  / /       / /\ \         |   \/   |       |   \/   |
#      \ \/ /       / ____ \        | |\  /| |       | |\  /| |
#      _|  |_     _/ /    \ \_     _| |_\/_| |_     _| |_\/_| |_
#     |______|   |____|  |____|   |_____||_____|   |_____||_____|
#
#

n = int(input())
temp = 1
for i in range (1,999999):
    temp = temp * 10 + 1
    if(temp % n == 0):
        print(temp)
        break