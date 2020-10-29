def digitalroot(n1,n2):
    if(len(n2)==1):
        return n2
    else:
        temp=n1
        summ=0
        while(temp!=0):
            remainder=temp%10
            summ+=remainder
            temp//=10
        n2=str(summ)
        return (digitalroot(summ,n2))

flag=1

while(flag==1):
    n1=int(input("Enter your Number: "))
    n2=str(n1)
    print("Digital root is",digitalroot(n1,n2))
    
    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")
    
    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break