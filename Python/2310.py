testes = int(input())

total_saques = 0
total_bloqueios = 0
total_ataques = 0

saques_certos = 0
bloqueios_certos = 0
ataques_certos = 0

valores_totais = []
valores_certos = []

for i in range(testes):
    nome = input()
    valores_totais = [int(z) for z in input().split()]
    valores_certos = [int(x) for x in input().split()]

    total_saques += valores_totais[0]
    total_bloqueios += valores_totais[1]
    total_ataques += valores_totais[2]

    saques_certos += valores_certos[0]
    bloqueios_certos += valores_certos[1]
    ataques_certos += valores_certos[2]

print("Pontos de Saque: {0:0.2f} %.".format(float((saques_certos*100)/total_saques)))
print("Pontos de Saque: {0:0.2f} %.".format(float((bloqueios_certos*100)/total_bloqueios)))
print("Pontos de Saque: {0:0.2f} %.".format(float((ataques_certos*100)/total_ataques)))
