nums = input("Entre com os números: ").split()
for i in nums:
    if int(i) % 4 == 0 or int(i) % 5 == 0:
        print (i,"",end='')
print ("atende(m) os critérios de divisibilidade ou por 4 ou por 5")