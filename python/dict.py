def printDict(string):
    dict = {}


    for i in string:
        try:
            dict[i] += 1
        except:
            dict[i] = 1

    print(string,dict)

printDict('aratisushil')
printDict('arati')
printDict('sushil')