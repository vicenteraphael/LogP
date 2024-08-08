while True:
    vals = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Número N\n2) Base da multiplicação sucessiva\n3) Índice do produto\n\n").split()
    vals = [int(i) for i in vals]
    if len(vals) != 3:
        print ("Opa, meu caro, faltou número aqui. Escreva-os novamente. Na mesma linha, não esqueça...")
    else:
        break
i = 1
while True:
    if (vals[0] * vals[1] ** i >= vals[2]):
        break
    print ("{} * {} ^ {} = {}" .format(vals[0], vals[1], i, vals[0] * vals[1] ** i))
    i += 1