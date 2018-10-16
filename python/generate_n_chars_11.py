def Generate_n_char(n,ch):
    str = ''
    while(n!=0):
        str = ch + str
        n-=1

    print str





if __name__ == "__main__":

    n =  int(raw_input("\nEnter Number"))
    ch = raw_input("\nEnter char")

    Generate_n_char(n,ch)
