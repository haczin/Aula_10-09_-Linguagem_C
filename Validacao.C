senha_correta = "1234"
senha_digitada = input("\nDigite a senha: ")

while senha_digitada != senha_correta:
    print("Senha incorreta! Tente novamente.")
    senha_digitada = input("Digite a senha: ")

print("Senha correta! Acesso liberado.")
