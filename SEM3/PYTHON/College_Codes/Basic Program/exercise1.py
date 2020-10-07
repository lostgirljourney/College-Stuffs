flag=1

def calc(x,y,operator):
	if(operator=="1"):
		return x+y
	elif(operator=="2"):
		return x-y
	elif(operator=="3"):
		return x*y
	elif(operator=="4"):
		if(y!=0):
			return x/y
		else:
			return("Can't divide by Zero(0).")
	elif(operator=="5"):
		if(y!=0):
			return x%y
		else:
			return("Error.")
	elif(operator=="6"):
		return x**y
	elif(operator=="7"):
		if(y!=0):
			return x//y
		else:
			return("Can't divide by Zero(0).")
	else:
		print("Sorry try again.")
		return 0

while(flag==1):
	print("Menu:")
	print("1. Addition")
	print("2. Subtraction")
	print("3. Multiplication")
	print("4. Division")
	print("5. Modulus/Remainder")
	print("6. Exponent")
	print("7. Floor Division")

	x=int(input("Enter your 1st number: "))
	y=int(input("Enter your 2nd number: "))
	operator=(input("Enter the operation (1-7): "))
	print("Result: "+ str(calc(x,y,operator)))

	intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

	if(intake=="Y" or intake=="y"):
		flag=1
	else:
		flag=0
		break