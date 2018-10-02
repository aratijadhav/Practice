''' Write a function that takes a character (i.e. a string of length 1) and returns True if it is a vowel, False otherwise.
'''



vowel  = ['a','e','i','o','u','A','E','I','O','U']

def is_vowel(letter):
    if letter not in vowel:
        return False
    else:
        return True

if __name__ == "__main__":
    letter = raw_input("Enter A Character")
    Return_value  = is_vowel(letter)
    print (Return_value)
