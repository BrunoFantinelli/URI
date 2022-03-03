valor = int(input())
primeiro = 0
segundo = 1

if valor == 1:
    print("0")
    quit()
elif valor == 2:
    print("0 1")
    quit()
    
print("{0} {1} ".format(0,1), end='')
for i in range(valor-2):
    proximo = primeiro + segundo
    print("{0}".format(proximo),  end='')
    if i+3 != valor:
        print(" ", end='')
    primeiro = segundo
    segundo = proximo

print("\n",end="")
