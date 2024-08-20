while True:
    while True:
        try:
            dados = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n3) Índice da potência\n2) Base inicial\n3) Base final\n4) Razão da sequência (r)\n\nPara sair, entre com 0 para os dois valores\n\n").split()
            dados[0], dados[1], dados[2], dados[3] = int(dados[0]), int(dados[1]), int(dados[2]), int(dados[3])
            break
        except:
            print ("*Número(s) inválidos... Tente novamente*")
    if dados[0] == dados[1] == dados[2] == dados[3] == 0:
        break
    if (dados[1] <= dados[2]):
        for dados[1] in range (dados[1], dados[2] + 1, dados[3]):
            print ("{} ^ {} = {}" .format(dados[1], dados[0], dados[1] ** dados[0]))
    else:
        for dados[1] in range (dados[1], dados[2] - 1, -dados[3]):
            print ("{} ^ {} = {}" .format(dados[1], dados[0], dados[1] ** dados[0]))
    print ()
print ("\nAdeus!")