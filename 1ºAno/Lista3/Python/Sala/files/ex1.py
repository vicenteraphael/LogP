dados = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Paridade dos termos da sequência (0 para par e 1 para ímpar)\n2) 1º Número da sequência (a1)\n3) Último número da sequência (an)\n\n").split()
dados = [int(i) for i in dados]
if dados[0] == 0 and dados[1] % 2 != 0 or dados[0] == 1 and dados[1] % 2 == 0:
    dados[1] += 1
if dados[0] == 0 and dados[2] % 2 != 0 or dados[0] == 1 and dados[2] % 2 == 0:
    dados[2] -= 1
print ("Os termos n, tal que n % 2 = {}, entre {} e {} são:" .format(dados[0], dados[1], dados[2]))
for dados[1] in range (dados[1], dados[2] + 1, 2):
    print ("{} " .format(dados[1]), end="")