def calculate_area():
  """Calculates and prints the area of a rectangle based on user input."""

  # Get width and height from the user as floats
  width = float(input("Enter the width of the rectangle: "))
  height = float(input("Enter the height of the rectangle: "))

  # Calculate the area
  area = width * height

  # Print the area
  print("The area of the rectangle is:", area)

if __name__ == "__main__":
  calculate_area()
