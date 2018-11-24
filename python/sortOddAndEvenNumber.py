

def sortArray(arr):
    start = 0
    end = len(arr)-1
    count = 0
    
    while(start < end):

        while(arr[start] % 2 != 0):
            start+=1
            count+=1
        

        while(arr[end]%2 == 0 and start < end):
            end-=1
        

        if(start < end):
            arr[start],arr[end] = arr[end],arr[start]
        


    odd = arr[:count]
    even = arr[count:]
    odd.sort(reverse=True)
    even.sort()
    odd.extend(even)
    print(odd)


if __name__ == "__main__":

    arr = [1,2,3,5,4,7,10]
    sortArray(arr)