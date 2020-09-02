def mul(list):
    res=1
    for i in list:
        res=res*i
    return res

list=[]
n=int(input("how many numbers you want to append"))
for i in range(0,n):
    a=int(input("enter number"))
    list.append(a)

res=mul(list)
print("multiplication of all number in list is ",res)
