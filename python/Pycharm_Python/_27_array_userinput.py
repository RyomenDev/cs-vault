
from array import *

arr=array('i',())
n=int(input('enter length'))

for i in range(n):
    x=int(input('enter value'))
    arr.append(x)

print(arr)
j=0
val=int(input('enter value to search'))
for i in arr:
    if(i==val):
        print(j)
        break
    j+=1
else:
    print('not found')

print(arr.index(val))