def kthSmallest(arr,k):
    
   arr.sort()

   print(arr[k-1])

if __name__ == "__main__":

    arr = [7, 10, 4, 3, 20, 15]
    arrlen = len(arr)
    index = 4

    kthSmallest(arr,index)