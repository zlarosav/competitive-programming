filas = int(input())

def multiplicar(a, b):
  return a * b

sum = 0
i = 0
while i < filas:
  a, b = input().split()
  sum += multiplicar(int(a), int(b))
  i += 1

print(sum)