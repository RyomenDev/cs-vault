
list1=["a","ab","cd","cde"]
print(list1)


for item1 in list1:  # also tupple can be --- not every
    print(item1)

# list2=("a","ab","cd","cde")
# for item2 in list2:
#     print(item2)

list3 = [["a",1],["ab",2],["cd",4]]
dict1=dict(list3)
print("dict=",dict1)

for item3 in list3:  # also tupple can be --- not every
    print(item3)

for item3, lolly in list3:
    print(item3,"and looypop is",lolly)

for item3, lolly in dict1.items():
    print(item3,"ands",lolly)

for item in dict1:
    print(item) # print key

listq=[2,"ab",56,5,"no",3,"yes",15,int ,float]
for itemq in listq :
    if str(itemq).isnumeric() and itemq>6:
        print(itemq)