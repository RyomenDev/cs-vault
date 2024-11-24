
i=0
j=0

while(i<10):
    print(i+1,end=" ")
    i=i+1

while(True):
    if j+1<5:
        j=j+1
        continue
    print(j+1,end=" ")
    if(j==10):
        break
    j=j+1

print("\n")

while (1):
        x = int(input("enter num\n"))
        if(x<100):
            print("num is less than 100\n")
            continue
        else:
            break


print("achieved\n")
