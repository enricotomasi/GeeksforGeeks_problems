#User function Template for python3

class Solution:
    def getMaxandMinProduct(self, arr, n): 
        # Your code goes here
        if (n == 1):
            return [arr[0], arr[0]]
        
        arr.sort()
           
        positivi = []
        negativi = []
        
        zero = False
        
        for it in arr:
            if it >0:
                positivi += [it]
            elif it < 0:
                negativi += [it]
            elif it == 0:
                zero = True;
        
        positivi.sort()
        negativi.sort()
        
        massimo = 1
        minimo = 1
        
        for it in positivi:
            massimo *= it
            minimo *= it
        
        if len(negativi) % 2 != 0:
            for i in range (0, len(negativi) - 1):
                massimo *= negativi[i]
        else:
            for it in negativi:
                massimo *= it

        if len(negativi) %2 != 0:
            for it in negativi:
                minimo *= it
        else:
            for i in range(0, len(negativi) - 1):
                minimo *= negativi[i]

        #print("minimo: ", minimo, "massimo:", massimo)
        
        if len(positivi) == 0:
            minimo = negativi[0]
            massimo = -1
                
        if massimo < 0 and zero == True:
            #print("puppa")
            massimo = 0
            
        if len(negativi) == 0:
            minimo = arr[0]
        
        return [minimo, massimo]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        product = ob.getMaxandMinProduct(a, n)
        print(product[1], end=" ")
        print(product[0])

        T -= 1


if __name__ == "__main__":
    main()
    
# } Driver Code Ends