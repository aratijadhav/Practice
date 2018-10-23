def longestSubArray(arr,n):

    for index in range(n):
        count = 0
        for nextIndex in range(index,n-1):
            if arr[nextIndex]!=arr[nextIndex+1]:
                #print(index,nextIndex,nextIndex+1)
                count+=1
            else:
                break
        
        print (index,count+1)


if __name__ == "__main__":

    arr = [1,0,1,0,0,1]

    longestSubArray(arr,len(arr))
