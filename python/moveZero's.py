#move all zero's to end of array on O(n) and O(1)


def moveZeroToEnd(arr,n):

    count = 0

    for i in range(len(arr)):
        if arr[i]!= 0:
            arr[count] = arr[i]
            count+=1
    
    for i in range(count,n):
        arr[i] = 0
    
     print(arr)





if __name__ == "__main__":

    arr = [1,2,0,4,3,0,5,0]
    arrlen = len(arr)

    moveZeroToEnd(arr,arrlen)