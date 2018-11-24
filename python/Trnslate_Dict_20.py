def Translate_Dictionary(lst):
    ans = ''

    dict = {"merry":"god", "christmas":"jul", "and":"och", "happy":"gott", "new":"nytt", "year":"ar"}

    for i in lst:
        if i in dict.keys():
            print(dict[i])


if __name__ == "__main__":

    list = "mery christmas and happy new year"
    list = list.split(" ")

    Translate_Dictionary(["new","and"])
