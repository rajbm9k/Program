
def double(arg):
    print('Before: ', arg)
    print(id(arg))
    arg = arg * 2
    print('After:  ', arg)
    print(id(arg))

def change(arg):
    print('Before: ', arg)
    print(id(arg))
    arg.append('More data')
    print('After:  ', arg)
    print(id(arg))

print("double function called:")
double(2.5)
print("change function called:")
my_list = ['Initial some','Data'] 
change(my_list)
