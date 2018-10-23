def kLargest(arr,k):
    list =[]
    arr.sort(reverse = True)
    for index in range(0,k):
        list.append(arr[index])
    print(list)

if __name__ == "__main__":
    arr = [12,5,787,1,23]
    k = 2
    arr = [1,23,12,9,30,2,50]
    k = 3
    kLargest(arr,k)