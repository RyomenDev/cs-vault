
# def iseven(n):
#     return n%2==0

# iseven= lambda n : n%2==0

nums=[3,4,2,6,7,9,4,9]

# evens=list(filter(iseven,nums))
evens = list(filter(lambda n : n%2==0,nums))
print(evens)

# def update(n):
#     return n*2

# update=lambda n:n*2

# doubles=list(map(update,evens))
doubles=list(map(lambda n:n*2,evens))
print(doubles)

from functools import reduce

# def add_all(a,b):
#     return a+b

# add_all = lambda a,b:a+b

# sum=reduce(add_all,doubles)
sum=reduce(lambda a,b:a+b,doubles)
print(sum)
