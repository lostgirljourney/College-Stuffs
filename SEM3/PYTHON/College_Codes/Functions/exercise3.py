def palindrome(word):
    p=0
    reverse = "" 
    for i in word: 
        reverse = i + reverse

    for i,j in zip(reverse,word):
        if(i==j):
            p=0
        elif(i!=j):
            p=1
            break

    if(p==0):
        print("The word is palindrome.")
    else:        
        print("The word is not palindrome.")

flag=1

while(flag==1):
    word = input("Enter a word to check whether it is palindrome or not: ")
    palindrome(word)

    intake=input("Do you wish to continue? (Press y to continue or any key to exit.): ")

    if(intake=="Y" or intake=="y"):
        flag=1
    else:
        flag=0
        break