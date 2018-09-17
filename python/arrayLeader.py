
def arrayLeader(arr):
    list = []
    for index in range(len(arr)-1):
        if arr[index]  < arr[index+1]:
            list.append(arr[index+1])
    ele = arr[len(arr)-1]
    list.append(ele)
    print(list)
    

if __name__ == "__main__":
    arr = [1,2,3,4,0]
    arrayLeader(arr)