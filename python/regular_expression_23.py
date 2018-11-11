import re

def Spelling_Correction(string):

    return re.sub('\.+','.',string)



if __name__ == "__main__":

    string = "this  ...  very funny  and    cool.Indeed!"
    print (Spelling_Correction(string))
