compra = float(input("Qual o valor de sua compra?\n"))
aplicativo = int(input("Comprou pelo aplicativo? (1) sim, (0) nao.\n"))
distancia = int(input("Qual a distancia? (1) menos de 3km | (2) entre 3km e 5km | (3) mais de 5km.\n")) 

if(aplicativo == 1):
	compra+=5.00

match (distancia):
	case 1:
		compra+=6.00
	case 2:
		compra+=10.50
	case 3:
		compra+=15.00

print(f"Valor a ser pago {compra:.2f}.")