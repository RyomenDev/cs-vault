a=9
b=6

c=sum((a,b))
print(c)
print(sum((a,b)))

def function1():
    print("function 1")

print(function1())
function1()

def function2(a,b):
    print("function 2\n",a+b)

function2(2,3)

def function3(a,b):
    ''' function to calculate average''' # docstring
    average = (a+b)/2
    # print(average)
    return average

function3(2,3)

v=function3(5,6)
print(v)

print(function3.__doc__)


