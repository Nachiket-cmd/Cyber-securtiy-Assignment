def case(a):
    u=0
    l=0
    for i in a:
        if (i.isupper()):
            u=u+1
        else:
            l=l+1
    return  u ,l

a=input("enter your string")
u,l = case(a)
print("number of upper case is" ,u)
print("number of lower case is" ,l)
