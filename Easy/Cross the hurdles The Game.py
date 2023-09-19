#User function Template for python3

def game (arr, brr, n) : 
    #Complete the function
    energy = 0

    
    for i in range(n):
        energy += arr[i]
        
        #print(f"Step: {i+1}, energy: {energy}, hustle: {brr[i]}")
        
        if energy < brr[i]:
            return "Game Over"
        energy = energy - brr[i] + i + 1
    
    return "You Win! " + str(energy)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    brr = list(map(int, input().strip().split()))
    res = game(arr, brr, n)
    print(res)






# } Driver Code Ends