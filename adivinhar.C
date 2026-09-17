numero_secreto = 7  # número predeterminado

while True:
    tentativa = int(input("\nAdivinhe o número secreto: "))
    if tentativa == numero_secreto:
        print("Parabéns, você acertou! Vitória!")
        break
    else:
        print("Errado, tente novamente!")
