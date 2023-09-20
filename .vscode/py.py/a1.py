a=10
def age(a):
    global a
    a=a-4
    print('a=',a)
age(a)
print(a)