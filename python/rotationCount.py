def rotationCount(arr,n):

    count = 0
    for i in range(len(arr)-1):
        if (arr[i+1] < arr[i]):
            return i+1



if __name__ == "__main__":

    arr = [7, 9, 11, 12, 15]
    arrlen = len(arr)

    print(rotationCount(arr,arrlen))