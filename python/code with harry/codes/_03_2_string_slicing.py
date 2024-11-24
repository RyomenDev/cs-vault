greeting = "good morning, "
name = "witcher"

# concatenating  two strings
'''
print(type(name))  # <class 'str'>
print(greeting+name)   # good morning, witcher

c=greeting+name
print(c)     ## good morning, witchern  
'''
print(name[1])  # i
print(name[3])  # c   (0-size-1)

# name[3]=r  --> item assignment, updatation not allowed

# ---------------  slicing ------------------------

print(name[0:3])  # 0-1-2  ==  wit  =  print(name[:3])
print(name[1:4])  # 1-2-3  ==  itc

print(name[-1])   # r ---> last index
print(name[-4:-1])  # -4,-3,-2 --> ehc = che
# print(name[-1:-4]) --> not work
print(name[-4:])  # -4,-3,-2,-1 --> rehc = cher
# print(name[-4:0]) --> not work

# ----------------------- slicing with skip --------------------------

str = "abcdefghijklmnopqrst"
print(str[0:14])  # abcdefghijklmn
print(str[1:14:2])  # every second character -- > bdfhjln
print(str[1::3])  # every third character -- > behknqt

