def rearrange(arr,n):
    positive = 0 
    negative = 1

    while(1):
        while(positive < n and arr[positive]>=0):
            positive+=2
        while(negative < n and arr[negative]<=0):
            negative+=2
        if(positive<n and negative<n):
            arr[positive],arr[negative] = arr[negative],arr[positive]
        else:
            break
        
    print(arr)

if __name__ == "__main__":

    arr = [1,-3,5,6,-3,6,7,-4,9,10]
    arrlen = len(arr)

    rearrange(arr,arrlen)