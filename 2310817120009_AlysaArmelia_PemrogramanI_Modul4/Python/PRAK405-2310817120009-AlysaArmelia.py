m, n = map(int,input().split())

perkalian_kelipatan = 0

nilai = 0

for k in range(1, m+1):
    keseluruhan = 0

    for l in range(k, 0, -1):
        perkalian_kelipatan = l * n
        print(f"({l} * {n})", end="")

        keseluruhan += perkalian_kelipatan

        if l > 1:
            print(" + ", end="")

    print(f" = {keseluruhan}")
    nilai += keseluruhan

print(nilai)