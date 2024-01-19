#User function Template for python3

class Solution:
    def kTop(self, a, n, k):
        #code here.
        ans = []
        
        arr = {i : 0 for i in range(k + 1)} 
        arr2 = [0 for i in range(k + 1)] 
      
        for i in range(n): 
            if a[i] in arr: 
                arr[a[i]] += 1
            
            else: 
                arr[a[i]] = 1
      
            arr2[k] = a[i] 
            
            tmp = arr2.index(a[i]) 
            tmp -= 1
              
            while tmp >= 0: 
                if arr[arr2[tmp]] < arr[arr2[tmp + 1]]: 
                    
                    x = arr2[tmp] 
                    
                    arr2[tmp] = arr2[tmp + 1] 
                    arr2[tmp + 1] = x 
                   
                elif (arr2[tmp] > arr2[tmp + 1]) and (arr[arr2[tmp]] == arr[arr2[tmp + 1]]): 
                    x = arr2[tmp] 
                    
                    arr2[tmp] = arr2[tmp + 1] 
                    arr2[tmp + 1] = x 
                
                else: 
                    break
                
                tmp -= 1
              
            j = 0
            temp = []
           
            while j < k and arr2[j] != 0: 
                temp.append(arr2[j]) 
                j += 1
            
            ans += [temp]
            
        return ans
            
        


#{ 
 # Driver Code Starts


t=int(input())
for _ in range(0,t):
    n,k=list(map(int,input().split()))
    a=list(map(int,input().split()))
    ob = Solution()
    ans=ob.kTop(a,n,k)
    for line in ans:
        print(*line)



# } Driver Code Ends
