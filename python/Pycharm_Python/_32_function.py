

def hello():
    print('hello')
    print('good morning')

hello()  # calling

def add(a,b):
    print(a+b)

add(3,4)

def add1(a,b):
    return a+b

result=add1(5,7)
print(result)

def add_sub(x,y):
    return x+y,x-y

result1=add_sub(7,6)
print(result1)

result1,result2=add_sub(7,6)
print(result1,result2)

