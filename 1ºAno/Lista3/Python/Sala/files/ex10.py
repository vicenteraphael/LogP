while True:
    while True:
        try:
            dados = input("Entre, na mesma linha, com os valores, respectivamente, referentes a:\n\n1) Paridade dos termos da sequência (0 se forem pares e 1 se forem ímpares)\n2) 1º Termo da sequência\n2) Último termo da sequência\nPara sair, entre com 0 em todos os valores\n\n").split()
            dados[0], dados[1], dados[2] = int(dados[0]), int(dados[1]), int(dados[2])
            break
        except ValueError:
            print ("Número(s) inválido(s)... Tente novamente")
    if dados[0] == dados[1] == dados[2] == 0:
        break
    if dados[0] == 0:
        print (f"A soma dos números pares, entre {dados[1]} e {dados[2]} é ", end='')
    else:
        print (f"A soma dos números ímpares, entre {dados[1]} e {dados[2]} é ", end='')
    if dados[0] == 0 and dados[1] % 2 != 0 or dados[0] == 1 and dados[1] % 2 == 0:
        dados[1] += 1
    if dados[0] == 0 and dados[2] % 2 != 0 or dados[0] == 1 and dados[2] % 2 == 0:
        dados[2] -= 1
    print((dados[1] + dados[2]) * ((dados[2] - dados[1]) // 2 + 1) // 2)
print ("\nAdeus")