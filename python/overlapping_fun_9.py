
def Check_Common(list1,list2):

    l1 = set(list1)
    l2 = set(list2)

    if len(l1.intersection(l2))>0:
        return True
    else:
        return False


'''
    for n1 in list1:
        for n2 in list2:
            if n1 == n2:
                print n1
            else:
                print "no"
'''

if __name__ == "__main__":

    list1 = [1,2,3]

    list2 = [5,6,3]


    print Check_Common(list1,list2)

'''
    list1 = []
    list2 = []

    l1 = int(raw_input("\nEnter length of first list"))
    print "\nEnter ele"
    for n in range(l1):
        num = int(raw_input())
        list1.append(num)



    l2 = int(raw_input("\nEnter length of second list"))
    print "\nEnter ele"
    for n in range(l2):
        num = int(raw_input())
        list2.append(num)
'''



