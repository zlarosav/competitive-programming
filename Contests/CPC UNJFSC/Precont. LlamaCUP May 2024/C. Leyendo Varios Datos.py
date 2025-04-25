filas = int(input())

def sumar(a, b):
  return a + b

while filas > 0:
  a, b = input().split()
  print(sumar(int(a), int(b)))
  filas -= 1