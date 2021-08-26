def duplicate_search():
    tc=int(input())
    for j in range(0,tc):
        a=0
        n=int(input())
        arr = input()
        arr = arr.split()
        x=input()
        b=n-1
        while(a<=b):
            y=int((a+b)/2)
            if(x==arr[y]):
                c=1
                break
            elif(x<arr[y]):
                b=y-1
            else:
                a=y+1


        if(c==1):
            z=arr.index(x)
            arr.reverse()
            i=arr.index(x)
            j=n-1-i
            y=(j-z+1)
            print(x,"-",y)

        else:
            print("Element not Present")


duplicate_search()