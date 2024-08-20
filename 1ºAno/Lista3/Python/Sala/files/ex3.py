while True:
    while True:
        try:
            tab, index1, index2 = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Valor da tabuada (podendo incluir valores decimais)\n2) Índice inicial da tabuada\n3) Índice final da tabuada\nPara sair, entre com 0 em todos os valores\n\n").split()
            tab, index1, index2 = float(tab), int(index1), int(index2)
            break
        except:
            print ("*Número(s) inválido(s)... Tente novamente*")
    if tab == index1 == index2 == 0:
        break
    for index1 in range (index1, index2 + 1):
        print ("{:.2f} X {} = {:.2f}" .format(tab, index1, tab * index1))
print ("\nAdeus")