
def Sum1(list):

    if len(list)==1:
        return list[0]
    else:
        print list[0],list[1:]
        return list[0] + Sum1(list[1:])


if __name__ == "__main__":

    list = [1,2,3,4,5]
    print Sum1(list)

