def fibonacci(x1, x2):
    n = 1
    ant = 1
    antsuc = 0
    for x1 in range(x1, x2 + 1):
        print ("{}º = {}" .format(x1, n))
        n = ant + antsuc
        antsuc = ant
        ant = n
while True:
    while True:
        try:
            x1, x2 = input("Na mesma linha, entre, respectivamente com os índices para a Sequência de Fibonacci\n\n1) Índice inicial\n2) Índice final\nPara encerrar o programa, entre com 0 para os dois valores\n\n").split()
        except ValueError:
            print ("*Número(s) inválido(s), tente novamente*")
        else:
            break
    if x1 == x2 == "0":
        break
    x1, x2 = int(x1), int(x2)
    fibonacci(x1, x2)