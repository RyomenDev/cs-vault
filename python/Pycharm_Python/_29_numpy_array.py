
from numpy import *

# arr=array([4,5,6,7,8,7])
# # arr=array([4,5,6,7,8,7],int)  --> also correct
#
#
# print(arr)
# print(arr.dtype)

# different ways of creating array in numpy-->
'''
array() ; linspace() ; logspace() ; arange() ; zeros() ; ones()
'''

# arr=linspace(1,16,10)  # 0 to 16 divied in 10 parts  default steps/part=50 , spacing fixed
# print(arr)

# ar1= logspace(10,40,6) # spacing in log of them form
# print(ar1)

# array of given size and default value = 0
ar2=zeros(5)
print(ar2)

# array of given size and default value = 1
ar3=ones(5)
print(ar3)

ar4=ones(5,int)
print(ar4)