class computer:

    def __init__(self,cpu,ram):
        print('in init')  # for every object call automaticaly
        self.cpu=cpu
        self.ram=ram

    def config(self):
        # print('i7,8gb,1TB')
        print('config is ',self.cpu,self.ram)

# comp1=computer()
# comp2=computer()
comp1=computer('i5',16)  #3 arguments comp1 also included
comp2=computer('ryzen',8)


comp1.config()
comp2.config()