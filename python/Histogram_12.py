def Histogram():

    lst = [4,9,7]
    ch = '*'

    for i in lst:
        str = ''
        while(i!=0):
            str = ch + str
            i-=1
        print str

if __name__ == "__main__":
    Histogram()


