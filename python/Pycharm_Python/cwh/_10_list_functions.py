
grocery = ["harpic","vim bar","deo","candy"]
# if other items eg. numbers added --> mixed list

print(grocery[2])
print(grocery)

numbers=[2,7,3,5,0,8]
numbers.sort()  # change original list
numbers.reverse() # change original list
print(numbers)

print(numbers[1:])
# using jump -1 when other places are used
print(numbers[1:5:-2])
print(max(numbers))

numbers.append(17) # add 7 at last
numbers.insert(2,9)
print(numbers)

numbers.remove(0)
numbers.pop() # remove last element
print(numbers)

# tp[1]=3  not
# print(tp)
# tp=(1,) # for single element
# print(tp)


# swap
a=1
b=8
a,b=b,a
print(a,b)
