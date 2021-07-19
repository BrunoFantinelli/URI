linha = str(input())
lista = linha.split('.')
stre = lista[1]
string = ""
aux = 0
if stre[0] == '0':
    for i in range(1,len(stre)):
        string+=stre[i]
    lista[1] = string
print(lista[1]+"."+lista[0])
