import datetime

# User and admin data
user = {
    'pin': 2004,
    'balance': 2500
}

admin_credentials = {
    'sofia': '20231000',
    'beatrice': '202505',
    'george12233': '123abc',
    'hERB12235': 'admin123'
}

LOG_FILE = "atm_pin_change_logs.txt"

def log_pin_change(admin_user, admin_pass):
    now = datetime.datetime.now()
    date_str = now.strftime("%B %d, %Y")
    time_str = now.strftime("%I:%M %p")
    log_entry = f"{admin_user:<18}{admin_pass:<14}{date_str:<25}{time_str:<12}Pin Change\n"
    with open(LOG_FILE, "a") as f:
        f.write(log_entry)

def change_pin():
    print("\n--- Admin Authentication Required for PIN Change ---")
    admin_user = input("Enter admin username: ")
    admin_pass = input("Enter admin password: ")
    if admin_user in admin_credentials and admin_credentials[admin_user] == admin_pass:
        try:
            new_pin = int(input("Enter new 4-digit PIN: "))
            if 1000 <= new_pin <= 9999:
                user['pin'] = new_pin
                print("PIN successfully changed.")
                log_pin_change(admin_user, admin_pass)
            else:
                print("PIN must be a 4-digit number.")
        except ValueError:
            print("Invalid input. PIN must be numeric.")
    else:
        print("Invalid admin credentials.")

def withdraw_cash():
    while True:
        try:
            amount = int(input("Enter Amount : "))
            if amount > user['balance']:
                print("Insufficient Amount : ")
            else:
                user['balance'] -= amount
                print(f"{amount} Pesos successfully withdrawn. Your remaining balance is {user['balance']} Pesos\n")
                return
        except ValueError:
            print("Invalid amount. Please enter a number.")

def balance_enquiry():
    print(f"Amount Left is {user['balance']} Peso\n")

def main():
    print("\nWelcome to the Pythondex ATM")
    try:
        pin = int(input('Enter your PIN Number: '))
    except ValueError:
        print("Invalid PIN format.")
        return

    if pin == user['pin']:
        while True:
            print("What do you want to do")
            print(" Enter 1 to Withdraw Cash")
            print(" Enter 2 for Balance Enquiry")
            print(" Enter 3 to Change PIN (Admin Only)")
            print(" Enter 4 to End Transaction")
            try:
                query = int(input("Select on the Menu list you want to do: "))
            except ValueError:
                print("Please enter a correct value shown")
                continue

            if query == 1:
                withdraw_cash()
            elif query == 2:
                balance_enquiry()
            elif query == 3:
                change_pin()
            elif query == 4:
                print("Thank you for using the ATM.")
                break
            else:
                print("Please enter a correct value shown")
    else:
        print("Incorrect pin")

if __name__ == "__main__":
    main()