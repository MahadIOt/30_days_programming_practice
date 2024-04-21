import math

# Define the constant for PI
PI = math.pi

def calculate_circumference(radius):
    # Calculate the circumference using the formula: circumference = 2 * PI * radius
    circumference = 2 * PI * radius
    return circumference

def main():
    # Get user input for the radius of the circle
    radius = float(input("Enter the radius of the circle: "))

    # Calculate the circumference
    circumference = calculate_circumference(radius)

    # Print the result
    print(f"The circumference of the circle with radius {radius} is: {circumference}")

if __name__ == "__main__":
    main()
