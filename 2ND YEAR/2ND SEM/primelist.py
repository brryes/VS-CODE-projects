def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def nextPrimeList(n):
    candidate = n + 1
    while True:
        if is_prime(candidate):
            return candidate
        candidate += 1

def get_positive_integer():
    while True:
        try:
            user_input = input("Enter a positive number:")
            n = float(user_input)
            if n < 0:
                print("The number is not a positive integer")
                continue
            if not n.is_integer():
                print("The number should be whole value.")
                continue
            return int(n)
        except ValueError:
            print("The number should be whole value.")

if __name__ == "__main__":
    while True:
        n = get_positive_integer()
        prime = nextPrimeList(n)
        print(f"The first prime greater than the number entered is:{prime}")
        break
    
    

