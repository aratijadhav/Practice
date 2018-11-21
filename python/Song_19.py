def Print_Song_Lyrics():

    for i in range(99,0,-1):
        if i == 0:
            break
        else:
            print i,"bottles of beer on the wall", i,"bottles of beer\nTake one down, pass it around", (i-1),"bottles of beer on the wall."



if __name__ == "__main__":

     Print_Song_Lyrics()
