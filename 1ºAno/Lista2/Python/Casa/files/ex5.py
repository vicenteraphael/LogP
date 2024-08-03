total = 0
while True:
    sal = float(input("\nSalário bruto = "))
    total += sal
    if sal == 0:
        print ("Salário líquido total = %.2f" % total)
        break
    h = float(input("Horas trabalhadas = "))
    ant = sal
    if sal >= 800 and sal <= 1600:
        sal -= sal * (0.08 + 0.05)
    elif sal > 1600:
        sal -= sal * (0.15 + 0.07)
    if h > 160:
        sal += (ant / 160) * 0.5 * (h - 160)
    print ("Salário líquido = R$ %.2f" % sal)