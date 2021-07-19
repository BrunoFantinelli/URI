import fileinput

for texto in fileinput.input():
        texto = texto.replace("o", "0");
        texto = texto.replace("O", "0");
        texto = texto.replace("l", "1");
        texto = texto.replace(",", "");
        texto = texto.replace(" ", "");
        try:
                valor = int(texto)
                if valor > 2147483647:
                        print("error")
                else:
                        print(valor)
        except:
                print("error")

