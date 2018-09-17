def swap(arr,s,e):
    arr[s],arr[e] = arr[e],arr[s]

def FindMin(arr,s,e):
    minval = s
    for i in range(s,e):
        if arr[minval]  > arr[i]:
            minval = i
    return minval

def arrangeArrayAccToIndex(arr,indexArr):
    for i in range(len(arr)):
        minIndex = FindMin(indexArr,i,len(arr))
        
        if(minIndex!=i):
            swap(indexArr,minIndex,i)
            swap(arr,minIndex,i)
    print(arr)

    



if __name__ == "__main__":
    arr = [50, 40, 70, 60, 90]
    indexArr = [3,  0,  4,  1,  2]

    arrangeArrayAccToIndex(arr,indexArr)