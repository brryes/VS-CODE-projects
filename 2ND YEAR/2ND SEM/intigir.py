#Name: REYES, SOFIA BEATRICE 
#School: FEU-ALABANG
#Machine Problem number - 3

class RomanConverter:
    roman_numerals = [
        ('M', 1000), ('CM', 900), ('D', 500), ('CD', 400),
        ('C', 100), ('XC', 90), ('L', 50), ('XL', 40),
        ('X', 10), ('IX', 9), ('V', 5), ('IV', 4), ('I', 1)
    ]

    @classmethod
    def int_to_roman(cls, num):
        if not (1 <= num <= 5000):
            raise ValueError("Number must be between 1 and 5000.")
        result = ""
        for roman, value in cls.roman_numerals:
            while num >= value:
                result += roman
                num -= value
        return result

    @classmethod
    def roman_to_int(cls, s):
        s = s.upper()
        i = 0
        num = 0
        roman_dict = dict(cls.roman_numerals)
        while i < len(s):
            if i+1 < len(s) and s[i:i+2] in roman_dict:
                num += roman_dict[s[i:i+2]]
                i += 2
            elif s[i] in roman_dict:
                num += roman_dict[s[i]]
                i += 1
            else:
                raise ValueError("Invalid Roman numeral.")
        if not (1 <= num <= 5000):
            raise ValueError("Roman numeral out of range (1-5000).")
        # Validate round-trip
        if cls.int_to_roman(num) != s:
            raise ValueError("Invalid Roman numeral format.")
        return num

def main():
    while True:
        print("\nMENU")
        print("1. convert an integer to a roman numeral")
        print("2. convert a roman numeral to an integer")
        print("3. exit\n")
        choice = input("Enter your choice: ").strip()
        if choice == '1':
            try:
                value = input("\nEnter Integer - ").strip()
                if not value.isdigit():
                    raise ValueError("Input must be a whole number.")
                num = int(value)
                roman = RomanConverter.int_to_roman(num)
                print(f"Output in Roman numerals is: {roman}")
            except ValueError as e:
                print(f"Error: {e}")
        elif choice == '2':
            try:
                roman = input("\nEnter roman numeral - ").strip()
                if not roman.isalpha():
                    raise ValueError("Input must be alphabetic characters only.")
                num = RomanConverter.roman_to_int(roman)
                print(f"Output in Integer is - {num}")
            except ValueError as e:
                print(f"Error: {e}")
        elif choice == '3':
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please select 1, 2, or 3.")

if __name__ == "__main__":
    main()
    
    
