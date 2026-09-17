saldo = 0.0

while True:
    print("\n--- Menu do Banco ---")
    print("1 - Ver Saldo")
    print("2 - Fazer Depósito")
    print("3 - Sair")
    opcao = input("Escolha uma opção: ")

    if opcao == "1":
        print(f"Seu saldo atual é: R$ {saldo:.2f}")
    elif opcao == "2":
        valor = float(input("Digite o valor do depósito: "))
        saldo += valor
        print(f"Depósito realizado! Novo saldo: R$ {saldo:.2f}")
    elif opcao == "3":
        print("Saindo... Até logo!")
        break
    else:
        print("Opção inválida, tente novamente.")
