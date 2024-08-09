while True:
    while True:
        try:
            nums = input("Na mesma linha, entre com os números que desejar\nIrei dizer qual é o maior e o menor\nPara sair, entre com um 0\n\n").split()
            nums = [int(i) for i in nums]
        except ValueError:
            print ("Número(s) inválido(s)... Tente novamente")
        else:
            break
    if len(nums) == 1 and nums[0] == 0:
        break
    print ("Maior = {}\nMenor = {}\n" .format(max(nums), min(nums)))