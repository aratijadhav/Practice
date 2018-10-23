def make_3sg_form(list):

    for ele in list:

        if ele.endswith("y"):
            string = ele[:-1]
            string = string + "ies"
            print (string)

        elif ele.endswith("o") or ele.endswith("ch") or ele.endswith("s") or ele.endswith("sh") or ele.endswith("x") or ele.endswith("z"):
            string = ele + "es"
            print (string)

        else:
            string = ele + "s"
            print (string)



if __name__ == "__main__":

    list = ["try","brush","run","fix"]
    make_3sg_form(list)
