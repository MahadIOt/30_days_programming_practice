# - Write a Python program that checks if a given password is strong (contains letters, numbers, and
# special characters).
import re

def is_strong_password(password):
    # Define regular expressions for letters, numbers, and special characters
    letter_regex = re.compile('[a-zA-Z]')
    number_regex = re.compile('[0-9]')
    special_char_regex = re.compile('[^a-zA-Z0-9]')  # Matches anything that is not a letter or number

    # Check if the password contains at least one letter, one number, and one special character
    has_letter = bool(letter_regex.search(password))
    has_number = bool(number_regex.search(password))
    has_special_char = bool(special_char_regex.search(password))

    # Return True if all conditions are met, otherwise False
    return has_letter and has_number and has_special_char

# Test the function
password = input("Enter your password: ")
if is_strong_password(password):
    print("Strong password!")
else:
    print("Weak password! Password must contain letters, numbers, and special characters.")
