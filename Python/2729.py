num = int(input())
for x in range (0,num):
    ste = str(input())
    lista = ste.split(" ")
    final = []
    for i in range (len(lista)):
        if lista[i] not in final:
            final.append(lista[i])
    final = sorted(final)
    print(' '.join(final))
