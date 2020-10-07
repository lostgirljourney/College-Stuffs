flag=1

while(flag==1):
    rows = int(input("No. of rows: "))
    k=0
    for i in range(1, rows+1):
        for space in range(1, (rows-i)+1):
            print(end="  ")
        while k != (2*i-1):
            print("* ", end="")
            k = k + 1
        k = 0
        print()

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break