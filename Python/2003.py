while True:
  try:
    valores = [int (x) for x in input().split(':')]
    if valores[0] < 7 or (valores[0] == 7 and valores[1] == 0):
        print("Atraso maximo: 0")
    else:
        print("Atraso maximo: {0}".format(((valores[0]+1)-8)*60 + valores[1]))
  except EOFError:
    break
