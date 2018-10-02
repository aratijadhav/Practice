def doubleEleAndZeroToEnd(arr,n):

    index = 0
    start = 0
    count = 0

    for i in range(n):
        if arr[i]!=0:
            arr[index] = (arr[i]+arr[i])
            index+=1
            start = index

        else:
            count+=1
    
    while(count!=0):
        arr[start] = 0
        start+=1
        count-=1

    print(arr)

if __name__ == "__main__":
    arr = [2, 2, 0, 4, 0, 8]
    arrlen = len(arr)

    doubleEleAndZeroToEnd(arr,arrlen)