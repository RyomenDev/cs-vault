

from numpy import *

arr = array([10,2,3,4,5])
arr=arr+5
arr1=arr+1
# arr1=([1,2,3,4,5])

print(arr)
print(arr1)

print(arr+arr1)

print(sin(arr))
print(log(arr))

print(sum(arr))
# mim,max,sort-ascending

print(concatenate([arr,arr1]))

arr2=arr1
print(arr1,arr2)
print(id(arr1),id(arr2))

arr3=arr1.view()  # new array
print(arr1,arr3)
print(id(arr1),id(arr3))

# shallow copy - change in one will be reflected in other
# deep copy

arr3[1]=34
print(arr1)

# DEEP COPY
arr4=arr1.copy()

arr4[1]=344
print(arr1)
print(arr4)
