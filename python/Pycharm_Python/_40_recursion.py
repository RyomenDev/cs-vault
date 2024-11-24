
import sys
print(sys.getrecursionlimit())  #1000

sys.setrecursionlimit(2000)
print(sys.getrecursionlimit())  #2000


def greet(i):
    print('hello',i)
    i=i+1
    greet(i)

i=1
# greet(i)  # by default limit 1000