def fahrenheit_to_celsius(fahrenheit):
  """Converts a temperature in Fahrenheit to Celsius.

  Args:
      fahrenheit: The temperature in Fahrenheit as a float.

  Returns:
      The temperature in Celsius as a float.
  """

  # Conversion factor: 5 degrees Celsius per 9 degrees Fahrenheit
  conversion_factor = 5 / 9

  # Calculate Celsius temperature
  celsius = (fahrenheit - 32) * conversion_factor

  return celsius

# Get user input for Fahrenheit temperature
fahrenheit_temp = float(input("Enter the temperature in Fahrenheit: "))

# Convert temperature and display result
celsius_temp = fahrenheit_to_celsius(fahrenheit_temp)
print(f"{fahrenheit_temp} degrees Fahrenheit is equal to {celsius_temp:.2f} degrees Celsius.")
