print ("Entre com um número entre 0 e 100 e eu direi o quão distante ele está do nosso número chave, que é 13:\n")
n = int(input("Nº = "))
print (n - 13) if n >= 13 else print ((n - 13) *-1)