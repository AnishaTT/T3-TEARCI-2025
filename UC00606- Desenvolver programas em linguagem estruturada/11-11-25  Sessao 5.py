"""
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
"""

def mult(n, m):
    resultado = 0
    while m > 0:
        resultado = resultado + n   
        m = m - 1                  
    return resultado


a = int(input("Digite o primeiro número: "))
b = int(input("Digite o segundo número: "))

print(f"{a} x {b} = {mult(a, b)}")        


