# write a python script that uses a loop to print out the first 10 squares numbers (n^2)
def main():
    # Iterate over the first 10 numbers and print their squares
    for i in range(1, 11):
        square = i ** 2
        print(f"The square of {i} is: {square}")

if __name__ == "__main__":
    main()
