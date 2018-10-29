
def Map_List_Of_Words_1(list):

    for wrd in list:
        count = 0
        for ch in wrd:
            if ch.isalpha():
                count += 1


        print wrd,count

def Map_List_Of_Words_2(list):

    print map(lambda x:(x, len(x)),list)

def Map_List_Of_Words_3(list):

    list = [ (x,len(x)) for x in list]
    print list

if __name__ == "__main__":

    list = [x for x in raw_input("enter elements").split()]
    Map_List_Of_Words_1(list)
    Map_List_Of_Words_2(list)
    Map_List_Of_Words_3(list)
