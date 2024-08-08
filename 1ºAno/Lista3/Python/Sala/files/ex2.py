a1, an = input("Na mesma linha, entre com os valores, respectivamente, referentes a:\n\n1) Primeiro valor da sequência (a1)\n2) Último valor da sequência (an)\n\n").split()
a1, an = int(a1), int(an)
print ("A soma dos números entre {} e {} é: {}" .format(a1, an, (a1 + an) * ((an - a1) + 1) // 2))