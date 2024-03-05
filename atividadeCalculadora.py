def soma(num1, num2):
    return num1 + num2
    
def subtracao(num1, num2):
    return num1 - num2
    
def multiplicacao(num1, num2):
    return num1 * num2
    
def divisao(num1, num2):
    return num1 / num2


def calculadora():
    num1 = float(input("Digite o numero 1\n"))
    num2 = float(input("Digite o numero 2\n"))
    
    operacao = input("Escolha a operação (+, -, *, /): ")
    
    if operacao == '+':
        print("soma: ", soma(num1, num2))
        
    elif operacao == '-':
        print("subtracao", subtracao(num1, num2))
    
    elif operacao == '*':
        print("multiplicacao", multiplicacao(num1, num2))
    
    elif operacao == '/':
        print("divisao", divisao(num1, num2))
    
    else:
        print("operacao invalida")
        
calculadora()
    