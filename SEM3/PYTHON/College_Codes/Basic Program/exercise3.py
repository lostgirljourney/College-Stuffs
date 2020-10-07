import math

flag=1

def area(x,y,z):
	if((x+y>z) and (y+z>x) and (z+x>y)):
		s=(x+y+z)/2
		ar=math.sqrt(s*(s-x)*(s-y)*(s-z))
		print("Result: "+ str(ar))
	else:
		print("Sum of two sides is smaller than third side.")

while(flag==1):
	x=int(input("Enter your 1st side: "))
	y=int(input("Enter your 2nd side: "))
	z=int(input("Enter your 3rd side: "))

	area(x,y,z)

	intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

	if(intake=="Y" or intake=="y"):
		flag=1
	else:
		flag=0
		break