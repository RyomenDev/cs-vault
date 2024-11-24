
# call by value
# def update(x):
#     print('befup id,x=', id(x))
#     x=9
#     print('x=',x)
#     print('aftup id,x=',id(x))
#
# # update(100)
#
# a=10
# print('befup id,a=',id(a))
# update(a)
# print('a=',a)
# print('aftup id,a=',id(a))

# list  - mutable
def update2(x):
    print('befup id,x=', id(x))
    x[1]=9
    print('x=',x)
    print('aftup id,x=',id(x))

# update(100)

lst=[10,20,30]
print('befup id,lst=', id(lst))
update2(lst)
print('lst=', lst)
print('aftup id,lst=', id(lst))