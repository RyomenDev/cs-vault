
'''
formal argument
actual argument - position keyword default variable_length
'''

# age =10 default value
def add(name,age=20): # formal argument
    print(name)
    print(age+5)

add('ben',10)  # actual argument
# order ,position important

# if sequence unknown
add(age=5,name='ben')
# keyword argument

add('ben') # dfault value of age is taken and overwrites if we pass some value

# variable lenth argument
def add(*b):  # *b = variable can be many
   # print(a)
   print(b)
   c=0
   for i in b:
       c=c+i

   print(c)

add(3,5,2,6,9,7,12)
