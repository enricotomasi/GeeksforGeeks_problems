#User function Template for python3

def isValid(s):
    #code here
    n = len(s)
    temp = ""
    
    numbers = 0
    points = 0
    
    for i in range(n + 1):
        c = ""
        
        if i == n:
            c = "."
        else:
            c = s[i]

        if ord(c) >= ord("0") and ord(c) <= ord("9"): # Number

            temp += c
            #print(f"temp: {temp}")
        else: # another char
            if c != "." or temp == "":
                #print("Not valid char")
                return 0
            
            if len(temp) > 3:
                return 0
            
            if i != n:
                points += 1
        
            num = int(temp)
            
            if num <= 9 and len(temp) != 1:
                return 0
            
            if num > 9 and num <= 99 and len(temp) != 2:
                return 0
            
            #print(f"num: {num}")
            
            if num < 0 or num > 255:
                #print("Number out of range")
                return 0
            
            numbers += 1
            
            temp = ""
    
    #print(f"numbers : {numbers}")
    #print(f"points  : {points}")
    
    if numbers == 4 and points == 3:
        return 1
            
    return 0



#{ 
 # Driver Code Starts
#Initial Template for Python 3

    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        if(isValid(s)):
            print(1)
        else:
            print(0)
    

# } Driver Code Ends