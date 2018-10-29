import Check_Vowel_4


def make_ing_form(list):

    for ele in list:

        print (ele)

        if ele.endswith("ie"):
            string = ele[:-2]
            string =  ele + "ying"
            print (string)

        elif ele.endswith("ie") and (ele[-2].endswith('e') or len(ele)==2):
            string  = ele + "ing"
            print (string)

        elif ele.endswith("e"):
            string = ele[:-1]
            string = ele + "ing"
            print (string)


        else:
            string =  ele + "ing"





if __name__ == "__main__":

    list = ["lie","see","move","hug"]
    make_ing_form(list)
