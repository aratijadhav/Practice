def countFreq(str1):
    dict ={}

    for i in str1:
        key = dict.keys()
        if i in key :
            dict[i]+=1
        else:
            dict[i] = 1

    print(dict)



str1 = "arati"
countFreq(str1)