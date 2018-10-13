def Find_Longest_Wrd(list):

    list = reduce(lambda x,y : x if len(x) > len(y) else y,list )

    print list




if __name__ == "__main__":

    list = [x for x in raw_input("enter ele").split()]
    Find_Longest_Wrd (list)
