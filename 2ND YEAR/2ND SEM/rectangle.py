#Name: REYES, SOFIA BEATRICE 
#School: FEU-ALABANG
#Machine Problem number - 1

class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

def get_positive_integer(prompt):
    try:
        value = input(prompt)
        int_value = int(value)
        if int_value <= 0:
            print("The number is not a positives integer:")
            return None
        return int_value
    except ValueError:
        print("Input the correct data format is not a Positive integer:")
        return None

def main():
    length = get_positive_integer("Enter Length value:")
    if length is None:
        return
    width = get_positive_integer("Enter the width of the rectangle:")
    if width is None:
        return
    rect = Rectangle(length, width)
    print(f"The Area of the Rectangle is:{rect.area()}")

if __name__ == "__main__":
    main()
    
