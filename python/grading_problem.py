def gradingStudents(grade):
    
    res = [None]*len(grade)
    print(res)
    for index in range(len(grade)):
        

        if(5-(grade[index]%5)<3)and not grade[index]< 38:
            res[index] = grade[index]+ (5-(grade[index]%5))
        else:
            res[index] = grade[index]
    print(res)
                
if __name__ == "__main__":

    arr = [73,67,38,33]

    gradingStudents(arr)