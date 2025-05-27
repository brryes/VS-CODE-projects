import math

#Name: REYES, SOFIA BEATRICE 
#School: FEU-ALABANG
#Machine Problem number - 2


class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius * self.radius

    def perimeter(self):
        return 2 * math.pi * self.radius

def main():
    while True:
        try:
            r_input = input("Enter radius:")
            radius = float(r_input)
            if radius < 0:
                print("You use enter positive number")
                continue
            if not radius.is_integer():
                print("You use input whole number value:")
                continue
            radius = int(radius)
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    c = Circle(radius)
    print(f"The answer is {c.area():.1f}")
    print(f"Here is the Answer: {c.perimeter()}")

if __name__ == "__main__":
    main()
    
    
    `Enter radius:-1`
`You use enter positive number`

`Enter radius:1.1`
`You use input whole number value:`

`Enter radius:10`
`The answer is 314.0`
`Here is the Answer: 62.800000000000004`
