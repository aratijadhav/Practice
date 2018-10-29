def max_in_list(list):

    print (reduce(lambda x,y: x if x > y else y,list))



if __name__ == "__main__":

    list = [int(x) for x in raw_input("enter elements").split()]
    max_in_list (list)
