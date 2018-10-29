
def Member_function(string,ch):

    for s in string:

        if s == ch:
            return True
        else:
            return False




if __name__ == "__main__":

    string = raw_input("enter string")
    s = raw_input("enter character")

    print Member_function(string,s)
