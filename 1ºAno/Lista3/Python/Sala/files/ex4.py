while True:
    while True:
        vals = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Número N\n2) Base da multiplicação sucessiva\n3) Índice do produto\nPara sair, entre com 0 em todos os valores\n\n").split()
        try:
            vals[0], vals[1], vals[2] = int(vals[0]), int(vals[1]), int(vals[2])
            break
        except:
            print ("*Número(s) inválido(s)... Tente novamente*")
    if vals[0] == vals[1] == vals[2] == 0:
        break
    i = 1
    while True:
        if (vals[0] * vals[1] ** i >= vals[2]):
            break
        print ("{} * {} ^ {} = {}" .format(vals[0], vals[1], i, vals[0] * vals[1] ** i))
        i += 1
    print ()
print ("\nAdeus!")