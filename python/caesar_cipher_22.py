import sys


def Caesar_Cipher(string):

    str1 = ' '
    dict = {'a':'n', 'b':'o', 'c':'p', 'd':'q', 'e':'r', 'f':'s', 'g':'t', 'h':'u',
          'i':'v', 'j':'w', 'k':'x', 'l':'y', 'm':'z', 'n':'a', 'o':'b', 'p':'c',
          'q':'d', 'r':'e', 's':'f', 't':'g', 'u':'h', 'v':'i', 'w':'j', 'x':'k',
          'y':'l', 'z':'m', 'A':'N', 'B':'O', 'C':'P', 'D':'Q', 'E':'R', 'F':'S',
          'G':'T', 'H':'U', 'I':'V', 'J':'W', 'K':'X', 'L':'Y', 'M':'Z', 'N':'A',
          'O':'B', 'P':'C', 'Q':'D', 'R':'E', 'S':'F', 'T':'G', 'U':'H', 'V':'I',
          'W':'J', 'X':'K', 'Y':'L', 'Z':'M'}

    for x in string:

        if x.isalpha():
            sys.stdout.write(dict[x])
        else:
            sys.stdout.write(x)





if __name__ == "__main__":

    string = "Pnrfne pvcure? V zhpu cersre Pnrfne fnynq!"
    Caesar_Cipher(string)
