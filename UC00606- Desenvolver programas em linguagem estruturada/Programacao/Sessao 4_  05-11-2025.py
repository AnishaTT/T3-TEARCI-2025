"""
numero = int(input("Digite um número: "))

if numero > 0:
    print("O número é positivo.")
elif numero < 0:
    print("O número é negativo.")
else:
    print("O número é zero.")

idade = int(input("Digite sua idade: "))
if idade < 12:
    print("Você é uma criança.")
elif idade < 18:
    print("Você é um adolescente.")
elif idade < 60:
    print("Você é um adulto.")
else:
    print("Você é um idoso.")



#ciclo while


limite = int(input("Até que número deseja somar? "))

# Inicialização
soma = 0
num = 1

# Ciclo while
while num <= limite:
    soma = soma + num
    num = num + 1

# Output
print("A soma de 1 até", limite, "é:", soma)




N = int(input("Até que número deseja somar? "))

# Inicialização
soma = 0
num = 1

# Ciclo while
while num <= N:
    soma += num
    num += 1

# Output
print("A soma de 1 até", N, "é:", soma)
 """



# Ciclo while
N1 = int(input("Insira o primeiro número: "))
N2 = int(input("Insira o segundo número: "))

# Inicialização
soma = 0
num = N1

# Ciclo while
while num <= N2:
    soma += num
    num += 1

# Output
print("A soma de", N1, "até", N2, "é:", soma)

#factorial


