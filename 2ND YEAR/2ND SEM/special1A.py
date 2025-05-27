
# Ask the user to input the number of minutes
minutes = int(input("Enter number of Minutes: "))

# Calculate hours and remaining minutes
hours = minutes // 60
remaining_minutes = minutes % 60

# Display the result
print(f"\n{minutes} minutes = {hours} hours")
print(f"Remaining Minutes = {remaining_minutes}")