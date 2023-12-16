var = input().split()

if len(var) == 2:
    a, b = map(float, var)
    i, j = map(float, input().split())
    x, y = map(float, input().split())
elif len(var) == 6:
    a, b, i, j, x, y = map(float, var)

hasil = ((a-b)*i/j-(x+y))

print(f"{hasil:.3f}")