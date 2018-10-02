def calculateLec(ttl,atl):
    temp = atl
    tempttl = ttl
    
    ans = 0

    #ans = int((100*atl)/ttl)

    while(ans <= 75):
        ans = int((100*atl)/ttl)

        if ans > 75:
            #print(ans,ttl,atl)
            break
        else:
            ttl = tempttl + ttl
            atl = atl+tempttl

    while(ans != 75):

        ttl = ttl-1
        atl = atl-1

        ans = int((100*atl)/ttl)
        #print(ans,ttl,atl)

    minlec = atl-temp

    if minlec < 0:
        return 0
    return minlec

        


    
    

if __name__ == "__main__":
    ttl = 7
    atl = 6

    print(calculateLec(ttl,atl))
