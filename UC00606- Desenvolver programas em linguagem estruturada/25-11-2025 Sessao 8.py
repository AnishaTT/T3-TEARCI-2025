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

