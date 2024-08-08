div, index = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Índice de divisibilidade\n2) Índice final do programa\n\n").split()
div, index = int(div), int(index)
print ("Aqui estão os números divisíveis por {} que são menores ou iguais a {}:" .format(div, index))
for i in range (div, index + 1, div):
    print ("{} " .format(i), end='')