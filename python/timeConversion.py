#https://www.hackerrank.com/challenges/time-conversion/problem

#!/bin/python3

import os
import sys



# def convert24(str1):
     
#     # Checking if last two elements of time
#     # is AM and first two elements are 12

#     if str1[-2:] == "AM" and str1[:2] == "12":
       
#         return "00" + str1[2:-2]
         
#     # remove the AM    
#     elif str1[-2:] == "AM":
#         return str1[:-2]
     
#     # Checking if last two elements of time
#     # is PM and first two elements are 12   
#     elif str1[-2:] == "PM" and str1[:2] == "12":
#         return str1[:-2]
         
#     else:
         
#         # add 12 to hours and remove PM
#         return str(int(str1[:2]) + 12) + str1[2:8]
def timeConversion(str1):


    if str1[-2:]=="AM" and str1[:2]=="12":
        return "00" + str1[2:-2]
    elif str1[-2:]=="AM":
        return str1[:-2]
    elif str1[-2:]=="PM" and str1[:2] == "12":
        return str1[:-2]

    else:
        return str(int(str1[:2])+2) + str1[2:8]
         
# Driver Code        
print(timeConversion("12:05:45 AM"))
