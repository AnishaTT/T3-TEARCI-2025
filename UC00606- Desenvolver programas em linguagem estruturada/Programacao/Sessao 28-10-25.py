""alt_m = 1.75
print(alt_m)

a = 27 * 2
print(a)

alt_cm = 90 / 6
print(alt_cm)

ecra_inc = int(input("Insira o tamanho do ecrã em polegadas: "))
ecra_cm = ecra_inc * 2.54
print("A medida do ecrã em centímetros é:", ecra_cm)

bilhetes_inc = float(input("Quanto custa cada bilhete: "))
bilhete_euro = bilhetes_inc * 3
print("O preço de 3 bilhetes é:", bilhete_euro)

c = float(input("Qual é o comprimento do retângulo: "))
l = float(input("Qual é a largura do retângulo: "))

area = c * l
perimetro = 2 * (c + l)

print(f"A área do retângulo é: {area:.2f}")
print(f"O perímetro do retângulo é: {perimetro:.2f}")

custo_sem_IVA = float(input("Qual é o valor do artigo sem IVA: "))
taxa_de_IVA = float(input("Qual é o valor do IVA: "))
valor_de_juro = float(input("Qual é o valor do juro: "))

custo_total = custo_sem_IVA + taxa_de_IVA + valor_de_juro
print(f"O custo final é de {custo_total:.2f} euros")

deposito_inicial = float(input("Insira o montante depositado em 01/01/2017: "))
taxa_de_juro = float(input("Qual é a taxa de juro anual (em %): "))
anos = int(input("Quantos anos pretende calcular (ex: até 2025 seriam 8 anos): "))

valor_actual = deposito_inicial * ((1 + (taxa_de_juro / 100)) ** anos)
print(f"O valor no banco em 01/01/{2017 + anos} é de {valor_actual:.2f} euros")

consumo_por_100km = float(input("Consumo por 100 km (em litros): "))
km_feitos = float(input("Número de km feitos: "))
custo_por_litro = float(input("Custo por litro (em euros): "))

consumo_em_litros = (km_feitos / 100) * consumo_por_100km
valor_total_gasto = consumo_em_litros * custo_por_litro

print(f"O consumo total foi de {consumo_em_litros:.2f} litros.")
print(f"O valor total gasto é de {valor_total_gasto:.2f} euros.")



data_carnaval = input("Data do Carnaval (formato: dd/mm/aaaa): ")
data_pascoa = input("Data da Páscoa (formato: dd/mm/aaaa): ")

diferenca = data_pascoa - data_carnaval
print(f"Há {diferenca.days} dias entre o Carnaval e a Páscoa.")

potencia_watts = float(input("Potência do aparelho (em Watts): "))
horas_trabalho = float(input("Horas de trabalho por dia: "))
custo_kwh = float(input("Custo por kWh (em euros): "))

potencia_consumida_kwh = (potencia_watts * horas_trabalho) / 1000
custo_total = potencia_consumida_kwh * custo_kwh

print(f"\nPotência consumida: {potencia_consumida_kwh:.2f} kWh")
print(f"Custo total: {custo_total:.2f} euros")

peso = float(input("Peso (em kg): "))
altura = float(input("Altura (em metros): "))

imc = peso / (altura ** 2)
print(f"O seu IMC é {imc:.2f}")

idade = int(input("Qual é a sua idade: "))
if idade >= 18:
    print("É maior de idade")
else:
    print("É menor de idade")

numero = int(input("Digite um número: "))
if numero % 2 == 0:
    print("O número é par")
else:
    print("O número é ímpar")

"""
