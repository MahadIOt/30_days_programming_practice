# Write a Python script that asks for an integer and prints whether it's a positive, negative, or zero
def main():
    # Ask the user for an integer input
    num = int(input("Enter an integer: "))
    
    # Check if the number is positive, negative, or zero
    if num > 0:
        print("The number is positive.")
    elif num < 0:
        print("The number is negative.")
    else:
        print("The number is zero.")

if __name__ == "__main__":
    main()
