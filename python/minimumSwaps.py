

def minimumSwaps(arr):

    print(arr)
    c = 0
    for index in range(len(arr)):

        min_val_index = arr.index(min(arr[index:]))

        if arr[index] > arr[min_val_index]:
            arr[index],arr[min_val_index] = arr[min_val_index],arr[index]
            c+=1
        # print(arr[min_val_index],arr[index])
    print(arr,c)


if __name__ == "__main__":
    arr = [7, 1, 3, 2, 4, 5, 6]

    minimumSwaps(arr)
