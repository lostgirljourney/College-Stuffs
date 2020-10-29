flag=1

while(flag==1):    
    num = int(input("Enter the number: "))
    size = len(str(num))
    sum = 0
    
    def isArmstrong(n):
        global sum
        global num
        global size
        if n < 10:
            sum += n ** size
            return num == sum
        else:
            sum += (n % 10) ** size
            return isArmstrong(n // 10)
        
    if isArmstrong(num):
        print(str(num) + " is an Armstrong Number.")
    else:
        print(str(num) + " is not an Armstrong Number.")

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")
    
    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break