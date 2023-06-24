#User function Template for python3

def pallan (n) : 
    #Complete the function
    if (n <= 9):
        return 1;
    
    sc = 0;
    temp = n;
    stringa = "";
    
    while (temp > 0):
        digit = int(temp %10);
        sc += digit;
        digit += ord("a");
        stringa += chr(digit);
        temp = int(temp /10);

    stringa = stringa[::-1];

    #print("Sommacifre:", sc);
    #print("Stringa:", stringa);
    
    parola = "";
    
    for i in range(sc):
        parola += stringa[i % len(stringa)];
    
    #print("Parola:", parola);

    rev = parola[::-1];
    
    #print("Rev:", rev);
    
    if (parola == rev):
        return 1;
    
    return 0;
    
    
#{ 
 # Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    n = int(input())
    ans = pallan(n)
    if(ans == True):
        print("YES")
    else:
        print("NO")
    

# } Driver Code Ends