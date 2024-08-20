while True:
    while True:
        try:
            vals = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) 1º termo da sequência (a1)\n2) Último termo da sequência (an)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n").split()
            vals[0], vals[1], vals[2] = int(vals[0]), int(vals[1]), int(vals[2])
            break
        except:
            print ("*Número(s) inválido(s)... Tente novamente*")
    if vals[0] == vals[1] == vals[2] == 0:
        break
    if (vals[0] <= vals[1]):
        while (vals[0] <= vals[1]):
            print (f"{vals[0]} ", end="")
            if (vals[0] % 2 == 0):
                print ("é par")
            else:
                print ("é ímpar")
            vals[0] += vals[2]
    else:
        while (vals[0] >= vals[1]):
            print (f"{vals[0]} ", end="")
            if (vals[0] % 2 == 0):
                print ("é par")
            else:
                print ("é ímpar")
            vals[0] -= vals[2]
    print ()
print ("\nAdeus!")