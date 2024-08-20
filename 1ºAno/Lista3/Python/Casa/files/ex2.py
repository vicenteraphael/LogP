while True:
    while True:
        try:
            vals = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) 1º termo da sequência (a1)\n2) Último termo da sequência (an)\n3) Paridade dos termos (0 para pares e 1 para ímpares)\nPara sair, entre com 0 em todos os valores\n\n").split()
            vals[0], vals[1], vals[2] = int(vals[0]), int(vals[1]), int(vals[2])
            if vals[2] != 1 and vals[2] != 0:
                print ("*Número(s) inválido(s)... Tente novamente*")
            else:
                break
        except:
            print ("*Número(s) inválido(s)... Tente novamente*")
    if vals[0] == vals[1] == vals[2] == 0:
        break
    if vals[2] == 0:
        print (f"Aqui estão os termos pares, entre {vals[0]} e {vals[1]}:")
    else:
        print (f"Aqui estão os termos ímpares, entre {vals[0]} e {vals[1]}:")
    if vals[0] <= vals[1]:
        if vals[0] % 2 != 0 and vals[2] == 0 or vals[0] % 2 == 0 and vals[2] == 1:
            vals[0] += 1
        if vals[1] % 2 != 0 and vals[2] == 0 or vals[1] % 2 == 0 and vals[2] == 1:
            vals[1] -= 1
        while vals[0] <= vals[1]:
            print (f"{vals[0]} ", end="")
            vals[0] += 2
    else:
        if vals[0] % 2 != 0 and vals[2] == 0 or vals[0] % 2 == 0 and vals[2] == 1:
            vals[0] -= 1
        if vals[1] % 2 != 0 and vals[2] == 0 or vals[1] % 2 == 0 and vals[2] == 1:
            vals[1] += 1
        while vals[0] >= vals[1]:
            print (f"{vals[0]} ", end="")
            vals[0] -= 2
    print ("\n")
print ("\nAdeus!")