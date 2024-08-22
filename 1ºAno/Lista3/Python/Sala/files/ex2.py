while True:
    while True:
        try:
            a1, an, r = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Primeiro valor da sequência (a1)\n2) Último valor da sequência (an)\n3) Razão da sequência (r)\nPara sair, entre com 0 em todos os valores\n\n").split()
            a1, an , r = int(a1), int(an), int(r)
            break
        except:
            print ("Número(s) inválidos... Tente novamente")
    if a1 == an ==  r == 0:
        break
    if a1 <= an:
        if a1 % r != 0:
            a1 -= a1 % r - r
        if an % r:
            an -= an % r
        print ("Sn = {}\n" .format((a1 + an) * ((an - a1) // 2 + 1)))
    else:
        if a1 % r != 0:
            a1 -= a1 % r
        if an % r:
            an -= an % r - r
        print ("Sn = {}\n" .format((a1 + an) * ((a1 - an) // 2 + 1)))
print ("Adeus")