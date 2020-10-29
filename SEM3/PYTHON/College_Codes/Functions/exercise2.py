def amicable(n1,n2):
    summ1=0
    summ2=0
    
    for i in range(1,(n1//2)+1):
        if(n1%i==0):
            summ1+=i
            
    for j in range(1,(n2//2)+1):
        if(n2%j==0):
            summ2+=j
    
    if((summ1==n2) and (summ2==n1)):
        print("Given numbers are Amicable")
    else:
        print("Given numbers are not Amicable")

flag=1

while(flag==1):
    n1=int(input("Enter 1st Number: "))
    n2=int(input("Enter 2nd Number: "))
    amicable(n1,n2)
    
    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")
    
    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break