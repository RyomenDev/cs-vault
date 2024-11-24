

import math

num=int(input("num="))

x=math.sqrt(num)
y=int(x)

i=2

while i<=y:
    if num%i==0:
        print('not prime')
        break
    # elif i==y:
    # # else:
    #     print('prime')
    i+=1
else:
    print('prime')

