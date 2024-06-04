def calculadora():
    num1 = float(input("Digite o numero 1\n"))
    num2 = float(input("Digite o numero 2\n"))
    
    operacao = int(input("Escolha a operação (1 - soma, 2 - subtracao, 3 - multiplicacao, 4 - divisao e 0 - sair): "))
    
    while True:
        if operacao == 1:
            print("soma: ", num1 + num2)
            
        elif operacao == 2:
            print("subtracao", num1 - num2)
        
        elif operacao == 3:
            print("multiplicacao", num1 * num2)
        
        elif operacao == 4:
            print("divisao", num1 / num2)
        elif operacao == 0:
            break
        else:
            print("Essa opcao nao existe")
            
        operacao = int(input("Escolha a operação (1 - soma, 2 - subtracao, 3 - multiplicacao, 4 - divisao e 0 - sair): "))
        
calculadora()
    