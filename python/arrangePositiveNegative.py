def arrangeArray(arr,n):

    for index in range(1,n):
        key = arr[index]

        if key > 0:
            continue
        j=i-1
        while(j>=0 and arr[j]>0):
            arr[j+1] = arr[j]
            j=j-1
        arr[j+1] = key
  

if __name__ == "__main__":
    arr = [11,-13,-5,6,-7,5,-3,-6]
    arrlen = len(arr)
    
    arrangeArray(arr,arrlen)