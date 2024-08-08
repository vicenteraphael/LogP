while True:
    while True:
        try:
            index1, index2 = input("Na mesma linha, entre, respectivamente, com os valores referentes a:\n\n1) Índice inicial\n2) Índice final\nPara sair, entre com 0 para os dois valores\n\n").split()
        except ValueError:
            print ("Faltou número... Escreva-os novamente, na mesma linha, não esqueça...")
        else:
            break
    if index1 == index2 == "0":
        break
    index1, index2 = int(index1), int(index2)
    for index1 in range (index1, index2 + 1):
        print ("{} ^ {} = {}" .format(index1, 2, index1 ** 2))