var1 = 6
var2 = 56

var3 = int(input())

if var3 > var2:
    print("greater")
elif var3 == var2 :  # elif == elseif
     print("equal")
else:
    print("lesser")

list1 = [5,7,9]
if 5 in list1:
    print(5 in list1)
    print("yes in the list")
if 15 not in list1:
    print("no it is not in list")