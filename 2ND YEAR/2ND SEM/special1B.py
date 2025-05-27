def display_denomination(amount):
    denominations = [1000, 500, 100, 50, 20]
    result = {}

    for denom in denominations:
        if amount >= denom:
            count = amount // denom
            result[denom] = int(count)
            amount = round(amount % denom, 2)

    if amount > 0:
        result['Remaining'] = round(amount, 2)

    return result


def main():
    try:
        amount = float(input("Enter the amount: "))
        if amount <= 0:
            print("Please enter a positive amount.")
            return

        denomination_result = display_denomination(amount)
        print("\nDenomination breakdown:")
        for denom, count in denomination_result.items():
            if denom == 'Remaining':
                print(f"Remaining amount: {count:.2f}")
            else:
                print(f"PHP {denom}: {count} piece(s)")

    except ValueError:
        print("Invalid input. Please enter a valid number.")


if __name__ == "__main__":
    main()