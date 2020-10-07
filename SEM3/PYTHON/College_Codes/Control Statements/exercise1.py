flag=1

while(flag==1):
    year = int(input("Enter the year: "))
    if((year%400 == 0) or ((year%4 == 0) and (year%100 != 0))):
    	print(str(year) + " is a leap year.")
    else:
    	print(str(year) + " is not the leap year.")

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break