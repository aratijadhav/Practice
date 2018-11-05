
def find_min_index(array):
    min_val = array[0]
    index = 0
    for i in range(len(array)):
        if min_val > array[i]:
            index = i
            min_val = array[i]
        else:
            pass
    return index

def find_max_index(array):
    max_val = array[0]
    index = 0
    for i in range(len(array)):
        if max_val < array[i]:
            index = i
            max_val = array[i]
            print(index,max_val)

        else:
            pass
    return index


def min_max_sum(a):

    maxarray = []
    minarray = []
    i=0
    start_index = 0
    
    while(i!=4):
        maxarray.append(a[i])
        minarray.append(a[i])
        i+=1
        start_index = i

    for i in range(start_index,len(a)):
       min_index = find_min_index(maxarray)
       max_index = find_max_index(minarray)
       print(max_index)

       if a[i] < minarray[max_index]:
           minarray[max_index] = a[i]


       if a[i] > maxarray[min_index]:
           maxarray[min_index] = a[i]
    print(sum(maxarray),sum(minarray))

if __name__ == "__main__":
    array = [15,1,14,2,3,4,6,5,10,8,9,7]
    min_max_sum(array)