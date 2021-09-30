import math
palindromes = [0, 1, 11, 101, 111, 1001, 1111, 10001, 10101, 11011, 11111, 100001, 101101, 110011, 111111, 1000001, 1001001, 1010101, 1011101, 1100011, 1101011, 1110111, 1111111, 10000001, 10011001, 10100101, 10111101, 11000011, 11011011]

print("List of binary palindrome numbers for all integers 0-255\n")
for i in range(0, 256):
    if str(bin(i))[2:] == str(bin(i)[2:][::-1]):
        print(i, bin(i)[2:])

print("Amount of palindromes:", "", len(palindromes))
sumPal = 0
for y in range(0, len(palindromes)):
    sumPal = sumPal + palindromes[y]

print("Sum of all palindromes: " + str(sumPal))


