def rearrangeArray(arr):
    start = 0
    end = len(arr)-1

    while end > start:
       
        if arr[start] < 0 and arr[end] < 0:
            end-=1
        elif arr[start] > 0:
            start+=1
        elif arr[start] < 0 and arr[end]>0:
            arr[start],arr[end] = arr[end],arr[start]
            start+=1
            end-=1
    
             
         
        


if __name__ == "__main__":
    arr = [1,2,-2,-3,-1,50,40,70,60,90]

    rearrangeArray(arr)