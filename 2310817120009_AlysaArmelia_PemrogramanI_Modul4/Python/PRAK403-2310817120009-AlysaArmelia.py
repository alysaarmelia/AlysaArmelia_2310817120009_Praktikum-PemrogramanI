bilangan, angka = map(int, input("").split())

p = bilangan
q = angka

while (p < angka and q > bilangan):
    print(f"{p} {q} - ", end="")
    
    p += 1
    q -= 1

    if (p == angka and q == bilangan):
        print(f"{p} {q}")

while (p > angka and q < bilangan):
    print(f"{p} {q} - ", end="")
    
    p -= 1
    q += 1

    if (p == angka and q == bilangan):
        print(f"{p} {q}")
