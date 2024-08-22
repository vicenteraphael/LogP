def fibonacci(x1, x2):
    n = 1
    ant = 1
    antsuc = 0
    for i in range(1, x2 + 1):
        if i >= x1: 
            print ("{}º = {}" .format(i, n))
        n = ant + antsuc
        antsuc = ant
        ant = n
while True:
    while True:
        try:
            x1, x2 = input("Na mesma linha, entre, respectivamente com os índices para a Sequência de Fibonacci\n\n1) Índice inicial (a1)\n2) Índice final (an | an > a1)\nPara encerrar o programa, entre com 0 para os dois valores\n\n").split()
            x1, x2 = int(x1), int(x2)
            break
        except ValueError:
            print ("*Número(s) inválido(s), tente novamente*")
    if x1 == x2 == 0:
        break
    x1, x2 = int(x1), int(x2)
    fibonacci(x1, x2)
print ("\nAdeus!")