dados = {'Tempo gasto (em h):' : float(input('Tempo gasto (em h): ')), 'Velocidade média (em km/h):': float(input('Velocidade média (em km/h): '))}
dados.update({'Distância (em km):': dados['Tempo gasto (em h):'] * dados['Velocidade média (em km/h):']})
dados.update({'Litros usados:' : dados['Distância (em km):'] / 12})
print ('')
for i in dados:
    print (i, "{:.2f}" .format(dados[i]))