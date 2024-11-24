
str = " howard wolwitz is so brave, he ran over sheldon"
print(str)
print(str[5])
print(str[0:6])
print(len(str))

print(str[0:48])
# error print(str[70])
print(str[0:70])
print(str[0:20:2])  # every 2nd next
print(str[::])   # [start(0):end(len):space(1)]

# -ve index
# print(str[-1:0])
print(str[-4:])   # ....-4,-3....
print(str[::-1])

 # string function in python
print(str.isalnum())
print(str.isalpha())
print(str.endswith("n"))

''' count - any letter
    find -  position of given word
capitalize - first letter capital
lower - string in lowercase
upper
replace
'''
print(str.replace("is","was"))