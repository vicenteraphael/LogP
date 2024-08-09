while True:
    while True:
        try:
            base, index = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Base\n2) Índice do expoente\nPara sair, entre com 0 em todos os valores\n\n").split()
            base, index = int(base), int(index)
        except ValueError:
            print ("*Número(s) inválido(s)... Tente novamente*")
        else:
            break
    if base == index == 0:
        break
    print ("{} ^ {} = {}\n" .format(base, index, base ** index))