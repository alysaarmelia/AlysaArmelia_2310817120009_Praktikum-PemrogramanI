import math
a,b=input("").split()
c= round(math.sqrt(int(b) * int(b) - int(a) * int(a)))
k= round(int(b) + int(a) + int(c))
l= round((int(a) * int(c))/2)
print(f'Alas = {c} cm')
print(f'Tinggi = {a} cm')
print(f'Keliling = {k} cm')
print(f'Luas = {l} cm^2\n')