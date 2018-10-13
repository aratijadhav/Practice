
#Define a function max_of_three() that takes three numbers as arguments and returns the largest of them


def FindMax3(Number1,Number2,Number3):
    maxnum=0
    if Number1>Number2:
        maxnum = Number1
    else:
        maxnum = Number2

    if maxnum>Number3:
        return maxnum
    else:
        return Number3



if __name__ == "__main__":
    Number1 = int(raw_input("Enter First Number"))
    Number2 = int(raw_input("Enter Second Number"))
    Number3 = int(raw_input("Enter Third Number"))
    Ans = FindMax3(Number1,Number2,Number3)
    print "Max number is",Ans
