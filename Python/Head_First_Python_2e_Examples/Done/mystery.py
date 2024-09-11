
def double(arg):
    print('Before: ', arg)
    arg = arg * 2
    print('After:  ', arg)

def change(arg):
    print('Before: ', arg)
    arg.append('More data')
    print('After:  ', arg)
print("double function called:")
double(2.5)
print("change function called:")
my_list = ['Initial some','Data'] 
change(my_list)
