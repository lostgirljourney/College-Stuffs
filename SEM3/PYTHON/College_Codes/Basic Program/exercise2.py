import math

flag=1

def distance(x1,y1,x2,y2):
	r=math.sqrt(pow((x1-x2),2)+pow((y1-y2),2))
	print("Distance: "+ str(r))

while(flag==1):
	print("Give your first point:")
	x1=int(input("x1: "))
	y1=int(input("y1: "))
	print("Give your second point:")
	x2=int(input("x2: "))
	y2=int(input("y2: "))

	distance(x1,y1,x2,y2)

	intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

	if(intake=="Y" or intake=="y"):
		flag=1
	else:
		flag=0
		break