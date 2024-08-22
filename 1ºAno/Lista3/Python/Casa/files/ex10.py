while True:
    while True:
        op = input("Escolha uma entre nossas operações suportadas:\n+  -  *  /  ^  S\nOperação = ")
        if op != "+" and op != "-" and op != "*" and op != "/" and op != "**" and op != "^" and op != "S" and op != "s":
            print ("Operação inválida... Tente novamente")
        else:
            break
    if op == "s" or op == "S":
        break
    while True:
        try:
            nums = input("Na mesma linha, entre com os dois número para a realização da operação escolhida:\n").split()
            nums[0], nums[1] = int(nums[0]), int(nums[1])
        except:
            print ("Número(s) inválido(s)... Tente novamente")
        else:
            break
    if op == "+":
        print ("{} + {} = {:.2f}\n" .format(nums[0], nums[1], nums[0] + nums[1]))
    elif op == "-":
        print ("{} - {} = {:.2f}\n" .format(nums[0], nums[1], nums[0] - nums[1]))
    elif op == "*":
        print ("{} * {} = {:.2f}\n" .format(nums[0], nums[1], nums[0] * nums[1]))
    elif op == "/":
        print ("{} / {} = {:.2f}\n" .format(nums[0], nums[1], nums[0] / nums[1]))
    elif op == "**" or op == "^":
        print ("{} ^ {} = {:.2f}\n" .format(nums[0], nums[1], nums[0] ** nums[1]))
print ("\nAdeus!")