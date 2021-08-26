import math
def exponential_search():
    tc=int(input())
    for j in range(0,tc):
        n=int(input())
        arr = input()
        arr = arr.split()
        x=input()
        p=0
        if(arr[0]==x):
            print("Present 0")
            p=1
        i=1
        c=1
        while i<n and arr[i]<=x and p==0:
            c=c+1
            i=i*2
        for j in range(int(i/2),n):
            c=c+1
            if(arr[j]==x):
                print("Present ",c)
                p=1
                break
        if(p==0):
            print("Not Present",c)

        

exponential_search()