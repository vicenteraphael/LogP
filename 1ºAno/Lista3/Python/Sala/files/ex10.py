while True:
    while True:
        try:
            dados = input("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Paridade dos termos da sequência (0 se forem pares e 1 se forem ímpares)\n2) 1º Termo da sequência\n2) Último termo da sequência\nPara sair, entre com 0 em todos os valores\n\n").split()
            dados = [int(i) for i in dados]
        except ValueError:
            print ("Número(s) inválido(s)... Tente novamente")
        else:
            break
    if dados[0] == dados[1] == dados[2] == 0:
        break
    if dados[0] == 0 and dados[1] % 2 != 0 or dados[0] == 1 and dados[1] % 2 == 0:
        dados[1] += 1
    if dados[0] == 0 and dados[2] % 2 != 0 or dados[0] == 1 and dados[2] % 2 == 0:
        dados[2] -= 1
    print ("A soma dos números n, tal que n % 2 = {}, entre {} e {} é {}\n" .format(dados[0], dados[1], dados[2], (dados[1] + dados[2]) * ((dados[2] - dados[1]) // 2 + 1) // 2))