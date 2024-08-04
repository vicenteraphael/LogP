nums = input("Entre com os números, eu direi se há divisibilidade por 2 e 3: ").split()
for i in nums:
    if int(i) % 6 == 0:
        print (i,"",end='')
print ("atende(m) os critérios de divisibilidade por 2 e 3")