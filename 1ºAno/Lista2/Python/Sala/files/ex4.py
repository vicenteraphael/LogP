a = float(input("Entre com valores referentes aos lados de um triângulo, eu direi:\n\na) Se os lados formam, de fato, um triângulo\n\nEm caso afirmativo, direi se o triângulo é:\n\nb) Equilátero\nc) Isósceles\nd) Escaleno\n\nL1 = "))
b = float(input("L2 = "))
c = float(input("L3 = "))
if a < b + c and b < a + c and c < a + b:
    if a == b and b == c:
        print ("O triângulo é equilátero :)")
    elif a == b or a == c or b == c:
        print ("O triângulo é isósceles :)")
    else:
        print ("O triângulo é escaleno ;)")
else:
    print ("Os valores fornecidos não formam um triângulo :/")