def Find_Max_Number(list1):

        Store_Max = 0

        for Ele in list1:

            if Store_Max < Ele:
                Store_Max = Ele

        return Store_Max


if __name__ == "__main__":

    list1 = []

    L = int(raw_input("Enter Length"))

    print "Enter ele"
    for i in range(L):
        ele = raw_input()
        list1.append(ele)

    M = Find_Max_Number(list1)
    print "Largest Element From Given List",M
