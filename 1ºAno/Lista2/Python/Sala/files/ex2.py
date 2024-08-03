n1 = float(input("Entre com as notas:\nN1 = "))
n2 = float(input("N2 = "))
if (n1 + n2) / 2 >= 6:
    print ("Aprovado :)\nMédia = %.2f" % ((n1 + n2) / 2))
else:
    e = float(input(("Eh rapaz, passa aí a nota do exame: ")))
    print ("Aprovado :)") if (n1 + n2 + e) / 3 >= 5 else print ("Reprovado :(") 
    print ("Média = %.2f" % ((n1 + n2 + e) / 3))