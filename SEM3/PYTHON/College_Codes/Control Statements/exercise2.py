flag=1

while(flag==1):
    character = input("Enter the character: ")
    if((character >= "A" or character >= "a") and (character <= "Z" or character <= "z")):
    	print("It's an alphabet.")
    elif character.isdigit() is True:
        print("It's an digit.")
    else:
    	print("It's an special character.")

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break