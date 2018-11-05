def minimumBribes(a):
     
    bribes = 0
    flag = 0
    for index in range(len(a)):
        
        if(a[index]-(index+1)>2):
            flag = 1
            break
        
        elif((a[index]-(index+1)) > 0):
                bribes += a[index]-(index+1)

                if (
                    (a[index]-(index+1)==2) 
                    and 
                    (a[index]-a[index+1]==1)
                    ):
                    bribes+=1 
                    
    if (flag == 1):
        print("Too chaotic")
                
    else:    
        print(bribes)            
    
    
                    


if __name__ == "__main__":
    #      1,2,3,4,5,6,7,8,9,10,11,12,13,14
    arr = [2,5,1,4,3,7,6]

    minimumBribes(arr)
   