
# dictionary is key value pairs

d1={}
print(type(d1))
d2={"harry":"burger","rohan":"fish","roy":"milk",
    "jone":{"B":"maggie","L":"roti","D":"egg"}}
print(d2)
print(d2["roy"])
print(d2["jone"])
print(d2["jone"]["B"])

d2["joy"]="junk food"
d2[56]="yes"
del d2["joy"]
print(d2)

d3=d2 # not new , just reference
del d3["harry"] # also del from d2
print(d2.copy()) # prints a copy

print(d2.get("rohan"))
d2.update({"lin":"tofee"}) # add at last
print(d2)

print(d2.keys())
print(d2.items())