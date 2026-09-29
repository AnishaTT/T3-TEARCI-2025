
soma= 0
n = 1
while n <= 100:
    #print(n,soma)
    soma = soma+ n
    n= n+1
    


print("A soma de 1 a 100 é:",soma)



n=int(input("Digite um número inteiro:"))
m= int(input("Outro número inteiro:"))
soma= 0
while n <= m:
      soma = soma+ n
      n= n+1
print("A soma de", n, "e", m, "é:", soma)

def sinal(n):
    if n > 0:
        return "é positivo"
    elif n == 0:
        return "é zero"
    else:
        return "é negativo"

n = int(input("Insira um número: "))
print("O número", n, sinal(n))


def fatorial(n):
    resultado = 1
    numero = n

    while numero > 1:
        resultado = resultado * numero
        numero = numero - 1

    return resultado

n = int(input("Digite um número inteiro positivo: "))
print("O fatorial de", n, "é:", fatorial(n))
