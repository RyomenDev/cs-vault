
# key =immutale

data = {1:'yes',2:'no'}
print(data[1])  #data[key
print(data.keys())
print(data.values())

print(data.get(2))
print(data.get(2,'not found'))
print(data.get(3,'not found'))

keys=['a','b','c']
values=['python','java','javascript']

data=dict(zip(keys,values))

print(data)
print(data['a'])

data['d']='cs'
del data['b']

print(data)

prog={'js':'atom','cs':'vs','python':['pycharm','sublime'],'java':{'jse':'netbeans','jee':'eclipse'}}

print(prog)
print(prog['python'][1])
print(prog['java'])
print(prog['java']['jee'])