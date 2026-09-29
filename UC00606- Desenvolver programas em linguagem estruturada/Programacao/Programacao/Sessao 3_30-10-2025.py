"""
# Pedir os diâmetros das pizzas
pizza_media = int(input("Qual é o diâmetro da pizza média (em cm)? "))
pizza_grande = int(input("Qual é o diâmetro da pizza grande (em cm)? "))

# Calcular os raios
raio_media = pizza_media / 2
raio_grande = pizza_grande / 2

# Calcular as áreas (A = π * r²)
area_media = 3.14 * (raio_media ** 2)
area_grande = 3.14 * (raio_grande ** 2)

# Mostrar resultados
print(f"\nA área da pizza média é {area_media:.2f} cm²")
print(f"A área da pizza grande é {area_grande:.2f} cm²")

# Comparar duas médias com uma grande
if 2 * area_media > area_grande:
    print("Duas pizzas médias têm mais quantidade de pizza!")
else:
    print(" Uma pizza grande tem mais quantidade de pizza!")



# mod =( resto da divisão)
ano= int(input(" Insira o ano  ?"))

x=24
y=5
a = ano%19
b = ano%4
c = ano%7
d = (19 *a+x)% 30
e = (2*b+4*c+6*d+y)% 7
if (d + e ) < 10 :
  print (" dia",d+e+22, 'de Março de')
          
else :
    print (" dia",d+e-9, 'de Abril')


"""

ano= int(input("Insira o ano:"))

x= 365
a=ano%100
b=ano%4       
        


if (b == 0 and a != 0):
    print("O ano é bissexto ")
else:
    print("O ano não é bissexto ")

   

















            
