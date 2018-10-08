def Filter_Longest_Wrd(list,n):

    print (filter(lambda x:  len(x) > n, list))
    print list



if __name__ == "__main__":

    list = [ x for x in raw_input("enter element").split()]
    Filter_Longest_Wrd(list,4)
