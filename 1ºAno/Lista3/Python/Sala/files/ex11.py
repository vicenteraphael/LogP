while True:
    while True:
        try:
            nums = input("Na mesma linha, entre com os números que desejar\nIrei dizer qual é o maior e o menor\nPara sair, entre com apenas um 0\n\n").split()
            nums = [int(i) for i in nums]
            break
        except ValueError:
            print ("Número(s) inválido(s)... Tente novamente")
    if len(nums) == 1 and nums[0] == 0:
        break
    print ("Maior = {}\nMenor = {}\n" .format(max(nums), min(nums)))
print ("\nAdeus!")