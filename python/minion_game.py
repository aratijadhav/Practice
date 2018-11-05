from collections import Counter

def all_string(original_str,string1):

    dict = {}

    for i in range(0,len(string1)):
        sub_str = ''    
            
        for j in range(0,i+1):
            sub_str +=string1[j]

        try:#if else aivji try catch kraychi idea sushlya ne dili
            dict[sub_str] = dict[sub_str]+1
        except:
            dict[sub_str] = 1
    
    return(dict)


def minion_game(string1):

    original_str = string1
    op = Counter({})#he sushlyane sangitla
    for k in range(len(string1)):
        o=Counter(all_string(original_str,string1[k:]))
        op += o
    
    print(op)
    c1=0
    c2=0
    for key in op:
        if key.startswith('A') or key.startswith('E') or key.startswith('I') or key.startswith('O') or key.startswith('U'):
            c1+=op[key]
        else:
            c2+=op[key]
    print(c1,c2)    
    return max(c1,c2)



if __name__ == "__main__":
    
    string1 = "GOOGLE"
    max_score = minion_game(string1)

    print("max_score",max_score)