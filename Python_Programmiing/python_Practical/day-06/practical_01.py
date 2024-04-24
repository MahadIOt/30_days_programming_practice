# Write a Python program that guesses a number between 1 and 10.
import random

def guess_number():
    # Generate a random number between 1 and 10
    secret_number = random.randint(1, 10)
    
    while True:
        # Ask the user to guess the number
        guess = input("Guess a number between 1 and 10: ")
        
        # Check if the input is a valid integer
        if not guess.isdigit():
            print("Please enter a valid number.")
            continue
        
        # Convert the input to an integer
        guess = int(guess)
        
        # Check if the guess is correct
        if guess == secret_number:
            print("Congratulations! You guessed the correct number.")
            break
        elif guess < secret_number:
            print("Too low! Try again.")
        else:
            print("Too high! Try again.")

# Run the function
guess_number()
