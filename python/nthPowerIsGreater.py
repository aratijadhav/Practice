def findMin(arr,n):
    total = 1

    for index in range(n):
        total = total*arr[index]
    
    i=0
    mult=1
    while(mult!=total):
        mult = mult*arr[i]
    print(arr[i])
if __name__ == "__main__":
    arr = [4,2,1,10,6]

    findMin(arr,len(arr))
