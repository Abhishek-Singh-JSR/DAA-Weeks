def linear_search():
    tc=int(input())
    for j in range(tc):
        y=0
        n=int(input())
        arr = input()
        arr = arr.split()
        x=input()
        for i in range(n):
            if(x==arr[i]):
                y=i+1
                print("Element present ",y)     
        if(y==0):
            print("Element not Present",n)


linear_search()