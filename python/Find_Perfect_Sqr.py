
def Find_Perfect_Sqr(list):

    Result_list = []

    for ele in list:

        x = ele*ele

        if x in list:
            Result_list.append(x)

    return Result_list




if __name__ == "__main__":

    list = [1,2,3,4,5,6,7,8,9]
    print Find_Perfect_Sqr(list)
