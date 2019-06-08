#version1
# def get_name():
#     name = str(input('Enter ypur name: '))
#     return name

# def hello():
#     name = get_name()
#     print('Hello ' + name)

#version2
def get_name():
    name = str(input('Enter ypur name: '))
    return name

def hello(name):
    print('Hello ' + name)

#hello(get_name())
###############################################
def conditional(x,y,z,name):
    if (x+y) > z:
        return x
    else:
        return name

#v1
print(conditional(1,2,3,'something_v1'))
#v2
x = 1
y = 2
z = 3
print(conditional(x,y,z,'something_v2'))
#v3
a = 1
b = 2
c = 3
print(conditional(a,b,c,'something_v3'))
#v4
c = conditional(2,4,5,'something_v4')
print(c)






