while True:
    while True:
        try:
            dados = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Nº da Base\n2) Índice inicial\n3) Índice final\n\nPara sair, entre com 0 para os dois valores\n\n").split()
            dados[0], dados[1], dados[2] = int(dados[0]), int(dados[1]), int(dados[2])
            break
        except:
            print ("*Número(s) inválidos... Tente novamente*")
    if dados[0] == dados[1] == dados[2] == 0:
        break
    if (dados[1] <= dados[2]):
        for dados[1] in range (dados[1], dados[2] + 1):
            print ("{} ^ {} = {}" .format(dados[0], dados[1], dados[0] ** dados[1]))
    else:
        for dados[1] in range (dados[1], dados[2] - 1):
            print ("{} ^ {} = {}" .format(dados[0], dados[1], dados[0] ** dados[1]))
    print ()
print ("\nAdeus!")