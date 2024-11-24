

def person(name,*data): # multiple arguments
    print(name)
    print(data)

def person1(name,**data):  # multiple arguments with help of keywords
    print(name)
    # print(data)
    for i,j in data.items():
        print(i,j)

person('ben',10,'Berlin',9990001010)

person1('ben',age=10,city='Berlin',mob=9990001010)