def evenFibSum(limit) : 
    if (limit < 2) : 
        return 0

    f1 = 0
    f2 = 2
    summ = f1+f2 

    while (f2 <= limit) : 
        f3 = 4*f2 + f1
        
        if (f3 > limit) : 
            break
        
        f1 = f2 
        f2 = f3 
        summ = summ + f2 

    return summ
 
print("The even fibonacci sum is " + str(evenFibSum(4000)) + ".")