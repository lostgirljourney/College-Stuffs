import random

flag=1

while(flag==1):
	x=int(input("Enter your 1st number: "))
	y=int(input("Enter your 2nd number: "))

	if(x<=y):
		result=random.randint(x,y)
		print("Your number is " + str(result))
	else:
		print("Error")

	intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

	if(intake=="Y" or intake=="y"):
		flag=1
	else:
		flag=0
		break