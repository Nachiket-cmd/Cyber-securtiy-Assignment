def volume(r):
    return 4/3*3.14*r**3
r = int(input("enter your radius"))
v=volume(r)
print("volume of sphere is ",end ="" )
print("%.2f"% v)
