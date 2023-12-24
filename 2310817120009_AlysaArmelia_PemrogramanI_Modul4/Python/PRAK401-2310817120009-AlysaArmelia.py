nilai, bilangan = input().split()
k = 0

for k in range(1, 51):

    if k % int(nilai) == 0:
        print(bilangan, end=' ')

    else:
        print(k, end=' ')
