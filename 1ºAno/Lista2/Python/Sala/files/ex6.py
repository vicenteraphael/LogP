a = float(input("Entre com os valores dos coeficientes da equação quadrática. Eu direi a solução se a equação houver solução:\nA = "))
b = float(input("B = "))
c = float(input("C = "))
if b ** 2 - 4 * a * c >= 0:
    print ("X' = %.2f" % (- b + ((b ** - 4 * a * c) ** 0.5) / (2 * a)))
    print ('X" = %.2f' % (- b - ((b ** - 4 * a * c) ** 0.5) / (2 * a)))
else:
    print ("A equação não possui solução :/")