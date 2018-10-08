def evenPostion(arr,n):

    list = [0]*n
    p = 0
    q=n-1

    for i in range(len(arr)):

        if(i+1)%2 == 0:
            list[i] = arr[q]
            q=q-1
        else:
            list[i] = arr[p]
            p=p+1
            
    print(list)

        



if __name__ == "__main__":
    arr = [1,3,2]
    arrlen = len(arr)
    arr.sort()

    evenPostion(arr,arrlen)