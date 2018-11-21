def smallestPositiveNumber(arr):
    for index in range(len(arr)-1):
        if arr[index] < arr[index+1]:
            pass
        else:
                

if __name__ == "__main__":

    arr = [2, 3, 7, 6, 8, -1, -10, 15]
    arr.sort()
    op = smallestPositiveNumber(arr)
    print(op)
    print(arr)
