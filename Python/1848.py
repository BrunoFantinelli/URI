count = 0

while True:
  try:
    linha = input()
    if linha == "--*":
        count += 1
    elif linha == "-*-":
        count += 2
    elif linha == "-**":
        count += 3
    elif linha == "*--":
        count += 4
    elif linha == "*-*":
        count += 5
    elif linha == "**-":
        count += 6
    elif linha == "***":
        count += 7
    elif linha == "caw caw":
        print(count)
        count = 0
  except EOFError:
    break
