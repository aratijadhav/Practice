def Palindrom(list1):

    for val in range(len(list1)):
        string = list1[val]
        string1 = reverse(list1[val])

        if string == string1:
            print string,string1
        else:
            print string,string1


def reverse(string):

    string = string[::-1]
    return string

if __name__ == "__main__":

    list1 =  ["Go hang a salami I'm a lasagna hog.", "Was it a rat I saw?", "Step on no pets", "Sit on a potato pan, Otis", "Lisa Bonet ate no basil", "Satan, oscillate my metallic sonatas", "I roamed under it as a tired nude Maori", "Rise to vote sir","Dammit, I'm mad!"]

    Palindrom(list1)
