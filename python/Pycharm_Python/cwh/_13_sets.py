
s = set()  # retains unique value only
print(type(s))

s_list =  set([1,2,3,4])
print(s_list)

s.add(1)
s.add(2)
s.add(1)
s1 = s.union({1,2,3})
s2 = s.intersection({2,4,5})
print(s)
print(s1)
print(s2)

# s.len ,s.max ,s.min ,s.isdisjoint() , s.remove
print(s.isdisjoint((s1)))