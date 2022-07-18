# 1.to find sum
a = input("num1 : ")
a = int(a)         # type conversion
b = input("num2 : ")
b = int(b)         # type conversion

print("sum : ", a+b)  # without type conversion : 56

# 2.to find remainder
a = input("num1 : ")
a = int(a)              # type conversion
print("remainder :", a % 2)

# 3.to check data type --> use windows terminal
'''
>>> a=input("enter num ")
enter num 45
>>> print(type(a))
<class 'str'>
>>>a
'45'
>>> int(a)           # type conversion
45
'''

# 4. comparsion between two numbers , greater than -> windows terminal
'''
>>> a=34
>>> b=56
>>> print(a >b)
False
>>> print(a<b)
True
'''

# 5. to find average
a = input("num1 : ")
b = input("num2 : ")
a = int(a)            # type conversion
b = int(b)            # type conversion

print("average :", (a+b)/2)

# 6. TO SIND SQUARE of a number
a=input("enter the number")
a = int(a)            # type conversion
print(a*a)