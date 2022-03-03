testes = int(input())
for teste in range(testes):
    tipo = input()
    r, g, b = input().split()
    r = int(r)
    g = int(g)
    b = int(b)
    if tipo == "min":
        print("Caso #{0}: {1}".format(teste+1,int(min(r,g,b))))
        
    if tipo == "max":
        print("Caso #{0}: {1}".format(teste+1,int(max(r,g,b))))
        
    if tipo == "mean":
        print("Caso #{0}: {1}".format(teste+1,int((r+g+b)/3)))

    if tipo == "eye":
        print("Caso #{0}: {1}".format(teste+1,int(0.30*r + 0.59*g + 0.11*b)))
