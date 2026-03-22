n1 = float(input())
n2 = float(input())
n3 = float(input())
n4 = float(input())

media = (2*n1 + 3*n2 + 4*n3 + 1*n4)/10

print(f"Media: {media}")

if(media >= 7.0):
    print("Aluno aprovado.")
elif(media >= 5.0 and media <= 6.9):
    print("Aluno em exame.")
    exame = float(input())
    print(f"Nota do exame: {exame}")
    media_final = (media+exame)/2
    if(media_final >= 5.0):
        print("Aluno aprovado.")
        print(f"Media final: {media_final}")
    else:
        print("Aluno reprovado.")
        print(f"Media final: {media_final}")
else:
    print("Aluno reprovado")
