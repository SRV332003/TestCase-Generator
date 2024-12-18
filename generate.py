import random
import math



def flip(c):
    return c


testcases = 100
ArrSize = 100000
NumSize = 10**4

t = random.randint(testcases/10, testcases)

total = 2*10**5

# t=1

print(t)
for i in range(t):

    n = random.randint(1, ArrSize)
    k = random.randint(1, 10)
    x = random.randint(1, NumSize)

    print(n,x,k)
    # print(k)\ 



    if total -n < 0:
        total = 0
    else:
        total -= n

    for i in range(n):
        print(random.randint(NumSize/10,NumSize), end=" ")
    print()
    if(total == 0):
        break