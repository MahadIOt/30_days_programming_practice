def calculate_sum_and_difference(num1, num2):
    # Calculate the sum
    sum_result = num1 + num2
    
    # Calculate the difference
    difference_result = num1 - num2
    
    return sum_result, difference_result

def main():
    # Get user input for the two numbers
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    
    # Calculate the sum and difference
    sum_result, difference_result = calculate_sum_and_difference(num1, num2)
    
    # Print the results
    print(f"The sum of {num1} and {num2} is: {sum_result}")
    print(f"The difference between {num1} and {num2} is: {difference_result}")

if __name__ == "__main__":
    main()
