flag=1

while(flag==1):
    no = input("Enter the number: ")
    length = len(no)

    summ=0
    temp = int(no)
    while(temp!=0):
        remainder=temp%10
        summ+=pow(remainder,length)
        temp=temp//10

    if(summ==int(no)):
    	print(no + " is an armstrong number.")
    else:
    	print(no + " is not an armstrong number.")

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break