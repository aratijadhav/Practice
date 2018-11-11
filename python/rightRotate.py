def reverseFun(a,l,h):

    while(l < h):
        a[l],a[h] = a[h],a[l]
        l+=1
        h-=1

def rightRotation(arr,n,k):

    print(arr)

    reverseFun(arr,0,n-1)
    reverseFun(arr,0,k-1)
    reverseFun(arr,k,n-1)

    print(arr)



if __name__ == "__main__":
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    arrlen = len(arr)
    k=3

    rightRotation(arr,arrlen,k)