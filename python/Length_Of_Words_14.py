def Find_Length_Of_Word(list1):

    Dict = {}

    for key in list1:
        Dict.update({key:len(key)})

    Ans = max(Dict.values())

    for key in Dict.items():
        if key[1] == Ans:
            return key

list1 = ["arati","samruddhi","sushil","pooja","ankita","priyanka"]
Return = Find_Length_Of_Word(list1)
print "Largest Word in list",Return
