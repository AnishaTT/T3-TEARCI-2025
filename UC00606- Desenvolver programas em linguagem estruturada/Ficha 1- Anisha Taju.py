
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
