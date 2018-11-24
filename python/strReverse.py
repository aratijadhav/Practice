def strReverse(arr):
    start = 0
    end = len(arr)-1

    while start < end:
        temp = arr[start]
        arr[start] = arr[end]
        arr[end] = temp
        start+=1
        end-=1
    print(arr)
if __name__ == "__main__":
    arr = "arati"
    strReverse(arr)