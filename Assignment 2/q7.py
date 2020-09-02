import sympy
def prime(list1):

    list2=[]
    for i in list1:
        if(sympy.isprime(i)):
            list2.append((i,"Prime"))
        else:
            list2.append((i,"nonprime"))
    return list2


list1=[]
list2=[]
n=int(input("please enter your range"))
for i in range(2,n+1):
    list1.append(i)
list2=prime(list1)
print(list2)
