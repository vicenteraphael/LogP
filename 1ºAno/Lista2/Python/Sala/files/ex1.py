notas = [float(input("Entre com as notas:\nN1 = ")), float(input("N2 = ")), float(input("N3 = "))]
print ("\nAprovado :)") if (sum(notas) / 3 >= 6) else print ("\nReprovado :(")
print ("Média = %.2f" % (sum(notas) / 3))