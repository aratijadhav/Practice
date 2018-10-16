
#Define a function max() that takes two numbers as arguments and returns the largest of them. Use the if-then-else construct available in Python. (It is true that Python has the max() function built in, but writing it yourself is nevertheless a good exercise.)

def FindMax(Number1,Number2):
    if Number1>Number2:
        return Number1
    else:
        return Number2


if __name__ == "__main__":
    Number1 = int(raw_input("Enter First Number"))
    Number2 = int(raw_input("Enter Second Number"))
    Ans = FindMax(Number1,Number2)
    print "Max number is",Ans
