def digital_root(n):
    while n >= 10:
        n = sum(int(digit) for digit in str(n))
    return n

if __name__ == "__main__":
    num = int(input("Enter the number:"))
    result = digital_root(num)
    print(f"The digital root of is:{result}")