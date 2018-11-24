list1 = ['a','e','i','o','u','A','E','O','U','I']

def Translat_Word(word):
   s = ''
   i = 0
   for i in word:
        if i not in list1 and i.isalpha():
            s = s + i +"o"+ i
        else:
            s = s + i
   print s

if __name__ == "__main__":
    word = raw_input("\nEnter word\n")
    Translat_Word(word)

