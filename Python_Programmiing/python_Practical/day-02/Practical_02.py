# Prompting user for age
age = int(input("Enter your age: "))

# Checking if age is even or odd
if age % 2 == 0:
    print("Your age, {}, is an even number.".format(age))
else:
    print("Your age, {}, is an odd number.".format(age))
