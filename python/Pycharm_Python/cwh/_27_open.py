
# f = open("_27_.txt")
f = open("_27_.txt","r")  # rb ,rt --> default

# content = f.read()
# print(content)

# content1 = f.read(5)
# print(content1)
# content1 = f.read(3)
# print(content1)
# content2 = f.read(3)
# print(content2)
# read next charecters ,not from start
# if already readed whole , next print function will give nothing


# to print char by char
# for line in content:
#     print(line)

# to print line by line
# for line in f:
#     print(line,end=" ")

# print(f.readline())
# print(f.readline())

print(f.readlines())

f.close()