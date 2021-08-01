import math
def jump_search():
    tc=int(input())
    for j in range(0,tc):
        n=int(input())
        arr = input()
        arr = arr.split()
        x=input()
        m=math.sqrt(n)
        m=int(m)
        l=0
        p=0
        c=0
        for i in range(0,n,m):
            c=c+1
            if(arr[i]==x):
                 p=1
                 print("Element Present",c)
            elif(arr[i]<x):
                l=i+m
            else:
                break

        for i in range(l+1,n):
            c=c+1
            if((arr[i]==x)&(p==0)):
                p=1
                print("Element Present ",c)
                break

        if(p==0):
            print("Element Not Present",c)

jump_search()