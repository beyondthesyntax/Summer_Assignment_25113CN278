num = int(input("Enter a number:"))
rev = 0
 
while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num //= 10

print("Reverse of a giver number is",rev)