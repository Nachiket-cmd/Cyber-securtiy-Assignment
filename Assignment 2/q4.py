def uniele(list1):
    list2=[]
    a=0
    for i in list1:
        a=list1.count(i)
        if ( a== 1):
            list2.append(i)

    return list2


list1=[]
list2=[]
n=int(input("how many numbers you want to append"))
for i in range(0,n):
    a=int(input("enter number"))
    list1.append(a)
list2=uniele(list1)
print(list2)
