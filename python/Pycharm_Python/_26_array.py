from array import *
# import array


'''
b   signed char        int              1byte
B   unsigned char      int              1
u   Py_UNICODE         UNICODE char     1
h   signed short       int              2
H   unsigned short     int              2
i   signed int         int              2
I   unsigned int       int              2
l   signed long        int              4
L   unsigned long      int              4
d   double             int              4
f   float              int              8
'''

vals = array('i',[3,5,6,7,8])

print(vals)
print(vals.buffer_info())
vals.reverse()
print(vals)

# for e in vals:
#     print(e)
va=array('i',[3,4,5,4,2,8])
newar=array(va.typecode,(a*a for a in va))
print(newar)