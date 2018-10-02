
def rearrange(arr,n):

    for index in range(n-1):
        if index%2 == 0 and arr[index]>arr[index+1]:
                arr[index],arr[index+1] = arr[index+1],arr[index]
        if index%2!=0 and arr[index]<arr[index+1]:
                arr[index],arr[index+1] = arr[index+1],arr[index]
    print(arr)


if __name__ == "__main__":

    arr = [6,4,2,1,8,3]

    rearrange(arr,len(arr))
