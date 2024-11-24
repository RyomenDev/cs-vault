

def fib(n):
    if n==1:
        print(0)
    elif n<0:
        print('negative not possible')
    else:
        x = 0
        y = 1
        for i in range(2,n):
            print(x)
            print(y)
            x=x+y
            y=y+x

fib(-5)
fib(7)





