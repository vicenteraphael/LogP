while True:
    while True:
        try:
            div, index = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Índice de divisibilidade\n2) Número de parada\nPara sair, entre com 0 em todos os valores\n\n").split()
            div, index = int(div), int(index)
            break
        except:
            print ("Número(s) inválido(s)... Tente novamente")
    if div == index == 0:
        break
    print ("Aqui estão os números divisíveis por {} que são menores ou iguais a {}:" .format(div, index))
    for i in range (div, index + 1, div):
        print ("{} " .format(i), end='')
    print ("\n")
print ("\nAdeus!")