# 1.
def imc(peso, altura):
    resultado = peso / (altura ** 2)
    print("O IMC é:", resultado)
    return resultado


# 2. 
def par(n):
    if n % 2 == 0:
        print(n, "é par")
        return True
    else:
        print(n, "é impar")
        return False


# 3. 
def soma_nw(n):
    soma = 0
    contador = 0
    while contador <= n:
        soma = soma + contador
        contador = contador + 1
    print("Soma de 0 até", n, "=", soma)
    return soma


# 4. 
def soma_nf(n):
    soma = 0
    for i in range(n + 1):
        soma = soma + i
    print("Soma de 0 até", n, "=", soma)
    return soma


# 5. 
def ncar(s):
    contador = 0
    for letra in s:
        contador = contador + 1
    print("Número de caracteres em", s, "=", contador)
    return contador


# 6. 
def ndig(s):
    contador = 0
    for letra in s:
        if letra >= "0" and letra <= "9":
            contador = contador + 1
    print("Número de dígitos em", s, "=", contador)
    return contador


# 7.
def soma_elem(t):
    soma = 0
    indice = 0
    while indice < len(t):
        soma = soma + t[indice]
        indice = indice + 1
    print("Soma dos elementos de", t, "=", soma)
    return soma


# 8. 
def pt(dom):
    # comparar os últimos 3 caracteres
    ultimos = dom[-3:]
    if ultimos == ".pt":
        print(dom, "termina em .pt:", True)
        return True
    else:
        print(dom, "termina em .pt:", False)
        return False
