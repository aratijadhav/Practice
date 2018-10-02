def Count(Str,String):
    c = 0
    for val in String:
        if val == Str :
            c+=1
    return c



def Char_Freq(String):

    dict = {}

    for Ele in String:
        dict.update({Ele:Count(Ele,String)})

    print dict



def myfunc(str):
    dict1 = {}

    for i in str:
        try:
            dict1[i] = dict1[i] + 1
        except:
            dict1[i] = 1

    print dict1

if __name__ == "__main__":

    String ="abbabcbdbabdbdbabababcbcbab"
    Char_Freq(String)
    myfunc(String)
