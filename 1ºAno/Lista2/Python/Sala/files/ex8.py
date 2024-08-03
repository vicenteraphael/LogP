nums = input("Entre com os números: ").split()
for i in nums:
    if int(i) % 6 == 0:
        print (i,"",end='')
print ("atende(m) os critérios de divisibilidade por 2 e 3")