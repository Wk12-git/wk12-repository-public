import math
import random
import string

MAX_TRYS = 3

password = "sjU87s.901"
count = 0

userInput = input("Enter password: ")

while count < MAX_TRYS+1:
    if userInput == password:
        print("Correct")
        break
    else:
        userInput = input("Try again: ")
        count+=1

if count > MAX_TRYS:
    print("Out of tries")
