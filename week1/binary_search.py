def binary_search():
    tc=int(input())
    for j in range(0,tc):
        a=0
        c=0
        n=int(input())
        arr = input()
        arr = arr.split()
        x=input()
        b=n-1
        while(a<=b):
            c=c+1
            y=int((a+b)/2)
            if(x==arr[y]):
                n=1
                print("Element present ",c)
                break
            elif(x<arr[y]):
                b=y-1
            else:
                a=y+1


        if(n!=1):
            print("Element not Present",c)


binary_search()