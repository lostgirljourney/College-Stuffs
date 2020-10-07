flag=1

def gcd(a,b):
    if(a>b):
        num=a
        deno=b
    else:
        num=b
        deno=a
    
    remainder = num%deno

    while(remainder!=0):
        num=deno
        deno=remainder
        remainder = num%deno

    gcd=deno
    
    return gcd

while(flag==1):
    a=int(input("Enter your 1st number: "))
    b=int(input("Enter your 2nd number: "))
    
    print("Result: "+ str(gcd(a,b)))

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break