def minFlips(string):

    res = 0
    last = ''

    for i in range(len(string)):
        if last!=string[i]:
            res+=1
        last = string[i]
    
    return (int(res/2))


if __name__ == "__main__":

    string = "010101100011"

    print(minFlips(string))
