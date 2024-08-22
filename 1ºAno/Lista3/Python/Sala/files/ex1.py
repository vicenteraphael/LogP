while True:
    while True:
        dados = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) 1º Número da sequência (a1)\n2) Último número da sequência (an)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n").split()
        try:
            dados[0], dados[1], dados[2] = int(dados[0]), int(dados[1]), int(dados[2])
            break
        except:
            print ("Número(s) inválidos... Tente novamente")
    if dados[0] == dados[1] == dados[2] == 0:
        break
    print ("Os termos ímpares entre {} e {} são, de {} em {}:" .format(dados[0], dados[1], dados[2], dados[2]))
    for dados[0] in range (dados[0], dados[1] + 1, dados[2]):
        if (dados[0] % 2 != 0):
            print ("{} " .format(dados[0]), end="")
    print ()
print ("Adeus!")