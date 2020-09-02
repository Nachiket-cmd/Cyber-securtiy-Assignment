def pal(str):
    if(str==str[::-1]):
        print("YES, your string is pallindrome")
    else:
        print("NO, your string is not pallindrome")



str=input("enter your string")
pal(str)
