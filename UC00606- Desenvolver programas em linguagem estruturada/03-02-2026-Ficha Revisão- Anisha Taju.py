
#1
d_milhas= float(input("Insira a distância em milhas:"))
d_kilometros= d_milhas*1.61 
print("A distância é de", d_kilometros)

#2
golos_marcados= int(input("Insira o número de golos marcados:"))
golos_sofridos=int(input("Insira o número de golos sofridos:"))
if golos_marcados> golos_sofridos:
    print("VITÓRIA")
 elif golos_marcados == golos_sofridos:
     print("EMPATE")
else:
print("DERROTA")

#3
n = int(input("Insira o valor de n : "))
m = int(input("Insira o valor de m : "))    
soma = 0
contador = n
while contador <= m:
    soma= soma+contador
    contador= contador+1
print("A soma dos numeros inteiros de é :",n "a" m "e:",soma)

#4
n= int(input("Insira o valor de n : "))
m = int(input("Insira o valor de m: "))
soma= 0
contador= n 
for contador <= m:
    soma= soma+ contador 
    contador= contador+1
print("A soma dos numeros inteiros de é :",n "a" m "e:",soma)


#5
def imc(peso, altura):
    indice_corporal= peso / altura **2
    return indice_corporal
peso = float(input("Insira o peso em Kg: "))
altura = float(input("Insira a altura em metros: "))
resultado_imc = imc(peso, altura)
print("O indice de massa corporal e": resultado_imc)


#6
def par(numero positivo):
    if numero % 2 == 0:
        return True
    else:
        return False      
numero = int(input("Digite um numero inteiro positivo: "))
resultado= par(numero)
print("O numero é par?:", resultado_par)




