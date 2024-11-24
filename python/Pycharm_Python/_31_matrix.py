

from numpy import *

arr1=array([[1,2,3,4,5,6],
           [2,3,4,5,6,7]])

# print(arr1)
#
# print(arr1.ndim)
# print(arr1.shape)
#
# arr2=arr1.flatten()
# print(arr2)
#
# arr3=arr2.reshape(2,2,3)  #3D
# print(arr3)

m1=matrix('1 2 3 ; 4 5 6 ; 7 8 9')

# m=matrix(arr1)
# print(m)
print(m1)

print(diagonal(m1)) # m.min ,max

m2=matrix('1 2 3 ; 4 5 6 ; 7 8 9')
print(m1+m2)
print(m1*m2)
