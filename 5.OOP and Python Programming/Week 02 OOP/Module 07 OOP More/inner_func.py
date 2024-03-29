# function is a first class object

def double_decker():
    print('Starting the double decker')
    def inner_fun():
        print('inside the inner')
        return 3000
    return inner_fun

print(double_decker())
# print(double_decker()())

def do_somthing(work):
    print('Work start')
    # print(work)
    work()
    print('work ended')

# do_somthing(2)
# do_somthing('ami busy')
def coding():
    print('coding started')

do_somthing(coding)

def sleeping():
    print('sleeping and dreamin in python')

do_somthing(sleeping)