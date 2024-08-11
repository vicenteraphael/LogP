while True:
    while True:
        try:
            vals = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) 1º termo da sequência (a1)\n2) Último termo da sequência (an)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n").split()
            vals[0], vals[1], vals[2] = int(vals[0]), int(vals[1]), int(vals[2])
        except:
            print ("*Número(s) inválido(s)... Tente novamente*")
        else:
            break
    if vals[0] == vals[1] == vals[2] == 0:
        break
    print (f"Aqui estão os números de {vals[0]} até {vals[1]}, de {vals[2]} em {vals[2]}:")
    if (vals[0] <= vals[1]):
        for vals[0] in range (vals[0], vals[1] + 1, vals[2]):
            print (f"{vals[0]} ", end="")
    else:
        for vals[0] in range (vals[0], vals[1] - 1, -vals[2]):
            print (f"{vals[0]} ", end="")
    print ("\n")