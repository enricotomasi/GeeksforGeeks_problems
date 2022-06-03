#Your task is to complete this function
#Your shouldn't return any thing it should print the required output
from math import gcd


def addFraction(num1, den1, num2, den2):
    #Code here
    
    num=((num1*den2) + (num2*den1))
    den = (den1*den2)
    numeratore = str(num//gcd(num, den))
    denominatore = str(den//gcd(num,den))
    print (numeratore + "/" + denominatore)

#{ 
#  Driver Code Starts
if __name__=='__main__':
    t= int(input())
    for i in range(t):
        arr = list(map(int, input().strip().split(' ')))
        addFraction(arr[0], arr[1], arr[2], arr[3])

# } Driver Code Ends