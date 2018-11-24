
#sum function to add all element in given list
def Sum1_Function(list1):

    add = 0

    for val in list1:
        add = add + val

    return add

#Mult function to multiply all elements in given list
def Mult_Function(list1):

    mul = 1

    for val in list1:
        mul = mul *val

    return mul


if __name__ == "__main__":

    list1 = []
    num  = int(raw_input("enter  len of list\n"))
    for x in range(num):
        a = int(raw_input("Enter List Ele\n"))
        list1.append(a)


    Ans1 = Sum1_Function(list1)
    Ans2 = Mult_Function(list1)

    print "Addtion is = ",Ans1," Multiplication is = ",Ans2
