flag=1

while(flag==1):
    num=int(input("Enter number: "))    
    summ=0
    def reverse(num):
        global summ
        if(num!=0):
            remainder=num%10
            summ=(summ*10)+remainder
            reverse(num//10)
        return summ

    print("Reverse is",reverse(num))
    
    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")
    
    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break