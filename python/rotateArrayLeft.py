def rotateLeft(arr,n):

    while(n!=0):
            data = arr.pop(0)
            arr.append(data)
            n = n-1
    return arr

    


if __name__ == "__main__":
    
    arr = [1,2,3,4,5]
    n=3

    print(rotateLeft(arr,n))    
