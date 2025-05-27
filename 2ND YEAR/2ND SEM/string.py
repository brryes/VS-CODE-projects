def xyz_diff(str1, str2):
    min_len = min(len(str1), len(str2))
    for i in range(min_len):
        if str1[i] != str2[i]:
            return i
    if len(str1) != len(str2):
        return min_len
    return -1

# Input from user
s1 = input("Enter first string:")
s2 = input("Enter second string:")

result = xyz_diff(s1, s2)
print(f"result:`{result}`")

