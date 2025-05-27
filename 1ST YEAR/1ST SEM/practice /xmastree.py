#galing kay prof kent haha, reqs ni misha


start = 1
space = 2
linesPerlevel = 3

levels = int(input("How many levels: "))

if levels <= 0:
    print("Invalid")

else:
    for i in range(0, levels, +1):
        for j in range(0, linesPerlevel, +1):
            value = start + i * space + j * space
            asterisks = ""
            for k in range(0, value,+1):
                asterisks += "*"

            print(asterisks)