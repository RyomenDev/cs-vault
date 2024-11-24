
a=10    # global variable
print('out a=',id(a))

def some():
    # a=15    # local variable

    global a  # specify as global - can change value of a - no local variable more
    print('some before a=', id(a))
    a=15
    print('some after a=', id(a))
    print('in fun:',a)


some()

def some2():
    a=9
    print('some2 a=', id(a))
    x=globals()['a']
    print('some x=', id(x))
    print('some2',a,x)
    globals()['a']=20
    print('some2 a=', id(a))


some2()



print('outside:',a)
print('out a=',id(a))