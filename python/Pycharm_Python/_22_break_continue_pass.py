
# continue --> skip ; break -> loop break ; pass --> empty condition

# x=int(input(":::="))
# av=10
# i=1
#
# while i<=x:
#     if x>av:
#         print("not available")
#         break
#     print(i)
#     i+=1

# for i in range(1,20):
#     if i%3==0 or i%5==0:
#         continue
#     else:
#         print(i)

for i in range(1,20):
    if i%2!=0:
        pass
    else:
        print(i)
