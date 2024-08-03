val = input("Entre com valores inteiros, eu irei dispô-los em ordem crescente:\nNºs: ").split()
val = [int(i) for i in val]
val.sort()
print ("Conjunto ordenado:", val)