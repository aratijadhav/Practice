def Reverse_Function(string):

#first logic
    list2 = []
    s = ''

    for i in range(len(string)-1,-1,-1):
        val = string[i]
        list2.append(val)

    list2 = ''.join(list2)

    print list2

#2 logic
    str = ''
    for  s in string:
        str = s + str

    print str

#3 logic
    if (len(string)) == 0:
        return s
    else:
        return string[1:]+string[0]


if __name__ == "__main__":

    string = "arati"
    s = ''
    print Reverse_Function(string)

