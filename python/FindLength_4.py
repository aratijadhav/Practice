#Define a function that computes the length of a given list or string. (It is true that Python has the len() function built in, but writing it yourself is nevertheless a good exercise.)


def FindLength(list1):
    c=0
    for i in list1:
        c+=1

    return c

if __name__ == "__main__":
    list1 = raw_input("Enter String")
    l=FindLength(list1)
    print "Length of given string",l
