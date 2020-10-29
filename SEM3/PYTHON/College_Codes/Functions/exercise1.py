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

def lcm(a,b):
    lcm = a*b / gcd(a,b)
    print("GCD of {} & {} = {}".format(a,b,gcd(a,b)))
    print("LCM of {} & {} = {}".format(a,b,lcm))

flag=1

while(flag==1):
    a = int(input("Enter a number (a): "))
    b = int(input("Enter another number(b): "))
    lcm(a,b)
    
    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break