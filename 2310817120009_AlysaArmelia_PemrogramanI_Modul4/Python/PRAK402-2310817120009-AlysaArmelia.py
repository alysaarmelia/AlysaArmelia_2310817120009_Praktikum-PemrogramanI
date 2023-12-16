bilangan = int(input(""))

for non in range(1, bilangan+1):
    if non % 2 == 1:
        print(non, end='')

print("")

for kok in range (bilangan, 0, -1):
    if kok % 2 == 0:
        print(kok, end='')