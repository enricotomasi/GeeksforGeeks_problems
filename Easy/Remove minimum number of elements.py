#User function Template for python3

class Solution:
    def minRemove(self, a, b, n, m):
        #Code here
        c = list(set(a) & set(b))
        #print(c)
        
        da = dict()
        db = dict()
        
        for it in a:
            if it not in da:
                da[it] = 1
            else:
                da[it] +=1
        
        for it in b:
            if it not in db:
                db[it] = 1
            else:
                db[it] +=1
        
        ans = 0
        for it in c:
            ans += min(da[it], db[it])
        
        return ans
    
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n, m = [int(x) for x in input().strip().split()]
        arr = [int(x) for x in input().strip().split()]
        brr = [int(x) for x in input().strip().split()]
        
        print(Solution().minRemove( arr, brr, n, m))

        T -= 1


if __name__ == "__main__":
    main()


# } Driver Code Ends