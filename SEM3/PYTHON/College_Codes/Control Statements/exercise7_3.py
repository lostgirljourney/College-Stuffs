flag=1

while(flag==1):
    rows = int(input("No. of rows: "))
    for i in range(0, rows):
        for l in range(i):
            print('  ', end='')
        for k in range(i + 1, rows):
            print('* ', end='')

        print("")

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break