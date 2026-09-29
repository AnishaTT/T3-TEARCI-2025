
#QUADRADO
l= float(input( "Qual é o lado do quadrado:"))
p= l*4
print(" O perimentro é", p)

A= l*l
print("A área é" , A )


#ALTURA


alt_m= int(input(" Qual é a sua altura em metros:"))
print("A sua altura em centímetros é:", alt_m * 100)


#MAIORIDADE

idade= int(input("Digite a sua idade:"))
if(idade>=18):
    print("É maior de idade")
       
else:
    print ("É menor de idade")
   

#PARIDADE
    
número= int(input("Digite um número:"))
if(número%2==0):
    print("O número é par")
else:
    print("O número é impar")


#SOMA DE 1 A 100
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

#Fatorial de um número
def fatorial(n):
    resultado = 1
    numero = n

    while numero > 1:
        resultado = resultado * numero
        numero = numero - 1

    return resultado

n = int(input("Digite um número inteiro positivo: "))
print("O fatorial de", n, "é:", fatorial(n))

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
#maioidade
def maioridade(n):
    if n >=18:
        return ("maior")
    else:
        return("menor")
idade= int(input("Insira a idade da pessoa: "))
print("A pessoa é ",maioridade(idade))


        
    
def fatorial(n):
    fatorial = 1
    while n > 0:
        fatorial *= n   
        n -= 1          
    return fatorial     
num = int(input("Digite um número: "))
print(f"O fatorial de {num} é fatorial(num)")

def mult(n, m):
    resultado = 0
    while m > 0:
        resultado = resultado + n   
        m = m - 1                  
    return resultado


a = int(input("Digite o primeiro número: "))
b = int(input("Digite o segundo número: "))

print(f"{a} x {b} = {mult(a, b)}")        

#RECURSIVIDADE

#factorial

def fatorial(x):
    if x==1:
      return 1
    else:
        return x*fatorial(x-1)

x= fatorial(8)
print(x)

#SOMA
def soma_n_r(lim_inf, lim_sup):
    if lim_inf == lim_sup:
        return lim_inf
    else:
        return lim_inf + soma_n_r(lim_inf, lim_sup - 1)
    
lim_inf = int(input("Limite inferior: "))
lim_sup = int(input("Limite superior: "))

resultado = soma_n_r(lim_inf, lim_sup)
print("O valor da soma é:", resultado)

#Multiplicação

def multiplicacao_n_r(lim_inf,lim_sup):
    if lim_inf==lim_sup:
        return lim_inf

    else:
        return lim_inf*multiplicacao_n_r(lim_inf, lim_sup-1)
lim_inf= int(input("Limite inferior:"))
lim_sup= int(input("Limite superior:"))
resultado = multiplicacao_n_r(lim_inf, lim_sup)
print("O valor da multiplicação é:", resultado)


#Exponênciação
def exponenciacao_n_r(base,expoente):
    if expoente==0:
        return 1
    else:
        return base*exponenciacao_n_r(base,expoente-1)

base = int(input("Base: "))
expoente = int(input("Expoente: "))
resultado = exponenciacao_n_r(base, expoente)
print("O valor da exponenciação é:", resultado)



def print_elems(t):
    i = 0
    while i < len(t):
        print(t[i])
        i=i+1


a = ()
def conta_elems(t):
    i = 0
    while i < len(t):
        i=i+1
    return i



print(conta_elems(a))  


"""
range(0, 6)
type (range(6))
<class 'range'>

range(2,10)
range(2, 10)

range(2,20,3)
range(2, 20, 3)

range(20,2,-3)
range(20, 2, -3)
range(6)

for i in range(6):
    print(i)

range(2,10)

for i in range(2,10):
    print(i)

range(2,20,3)
for i in range(2,20,3):
    print(i)

range(20,2,-3)
for i in range(20,2,-3):
    print(i)



soma=0
for i in range (101):
    soma= soma+i 
    print(soma)
for
#soma=(lim_inferior,lim_superior)
def soma(lim_i,lim_s):
    soma=0
    for i in range(lim_i,lim_s+1):
        soma=soma+i
    return(soma)
print(soma(1,9))

#string
str="python"
len(str)
print(len(str))

str="python"
str[0]
print(str[0])

str="python"
str[3]
print(str[3])

str="python"
str[:2]
print(str[:2])

str="python"
str[::2]
print(str[::2])

#TRUE 
str= "pyhton"
print("on" in str)

str= "pyhton"
print(str.count("y"))


str= "pyhton"
print(str.index("n"))

str= "pyhton"
print(str+"!")
"""

def conta(s):
    contador= 0
    for _ in s:
     contador= contador+1
    return contador

print(conta("Anisha"))  



                              

