def Check_Pangram(String):

    Dict = {}
    for Ele in String:
        Dict.update({Ele:len(Ele)})

    if len(Dict) > 26:
        return True
    else:
        return False



if __name__ == "__main__":

    String = "The quick brown fox jumps over the lazy dog"
    print Check_Pangram(String)
    '''
    for i in range(len(String)):

        if String[i] >= 'a' and String[i] <= 'z':
            print String[i]
    '''
