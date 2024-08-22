while True:
    while True:
        try:
            vals = input("Na mesma linha, entre respectivamente com os valores referentes a:\n\n1) Número para a tabuada\n2) Índice inicial da tabuada\n3) Índice final da tabuada\nPara sair, entre com 0 em todos os valores\n\n").split()
            vals[0], vals[1], vals[2] = float(vals[0]), int(vals[1]), int(vals[2])
            break
        except:
            print ("*Número(s) inválido(s)... Tente novamente*")
    if (vals[0] == vals[1] == vals[2] == 0):
        break
    if (vals[1] <= vals[2]):
        for vals[1] in range(vals[1], vals[2] + 1):
            print("{:.2f} X {} = {:.2f}" .format(vals[0], vals[1], vals[0] * vals[1]))
    else:
        for vals[1] in range(vals[1], vals[vals[2]] - 1, -1):
            print("{:.2f} X {} = {:.2f}" .format(vals[0], vals[1], vals[0] * vals[1]))
    print ()
print ("\nAdeus!")