def idade():
    
    nome = input("Digite seu nome\n")
    idade = int(input("Digite o ano em que você nasceu\n"))
    
    if idade < 1922 or idade > 2021:
        raise Exception("Idades invalidas")
    else:
        print(nome + " voce tem " + str(2024 - idade - 1) + " de idade\n")
        print("Ou vai fazer " + str(2024 - idade) + " esse ano")
            
idade()