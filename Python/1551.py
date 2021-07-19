val = int(input())
for i in range(val):
    lista = []
    frase = str(input())
    sv = frase.split(" ")
    x = ''.join(sv)
    sv = x.split(",")
    x = ''.join(sv)
    for letras in x:
        if letras not in lista:
            lista.append(letras)
    if len(lista) < 13:
        print("frase mal elaborada")
    if len(lista) >=13 and len(lista) < 26:
        print("frase quase completa")
    if len(lista) == 26:
        print("frase completa")
