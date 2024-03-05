lista_produtos = ['máscaras faciais', 'batons', 'esmaltes', 'perfumes', 'loções', 'xampus', 'sabonetes', 'delineadores'] 

lista_produtos[1] = 'rímel'
lista_produtos[4] = 'cremes hidratantes'
lista_produtos.pop(7)
lista_produtos.append('hidratante facial')
lista_produtos.append('sabonete facial')


for i in lista_produtos:
    print("Temos ", i  ," à venda!\n")