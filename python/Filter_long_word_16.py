def Filter_Long_Word(list1,N):
    Dict = {}

    for Ele in list1:
        Dict.update({Ele:len(Ele)})

    for key in Dict.items():
        if key[1] > N:
            print key




if __name__ == "__main__":

    list1 = ["arati","sushil","samruddhi","ankita","pooja","priynka"]
    N = 5
    Filter_Long_Word(list1,N)
