while True:
    while True:
        try:
            dados = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Base da potência\n2) Índice inicial do expoente\n3) Índice final do expoente\nPara sair, entre com 0 em todos os valores\n\n").split()
            dados = [int(i) for i in dados]
        except ValueError:
            print ("*Número(s) inválido(s)... Tente novamente*")
        else:
            break
    if dados[0] == dados[1] == dados[2] == 0:
        break
    for dados[1] in range (dados[1], dados[2] + 1):
        print ("{} ^ {} = {}" .format(dados[0], dados[1], dados[0] ** dados[1]))
    print ("")