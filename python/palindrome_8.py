def check_Palindrom(string):

    str = ''
    temp = string

    for s in string:
        str =  s + str
    print str

    if temp == str:
        return True
    else:
        return False



if __name__ == "__main__":

    string = "arati"
    print check_Palindrom(string)
