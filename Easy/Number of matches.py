#User function Template for python3

class Solution:
    def getAnswer(self, arr, answer, n):
        #  Your task is to store the answer of each index in the 'answer' array
        #  Note: indexing is 0 based
        
        copy = arr.copy()
        m = dict()
        
        for i in arr:
            m[i] = 1
            
        if n%2!=0:
            m[arr[-1]] = 0
            
        while len(copy) > 1:
            i = 0 
            mis = []
            while (i + 1) < len(copy):
                
                if copy[i] < copy[i + 1]:
                    mis.append(copy[i + 1])
                else:
                    mis.append(copy[i])
                
                i += 2

            if len(copy) %2 != 0:
                mis.append(copy[-1])
            
            copy = mis
            
            if len(copy) %2 !=0:
                m[copy[-1]] -= 1

            for i in copy:
                if i in m:
                    m[i] += 1

        for i in range(n):
            answer[i] = m[arr[i]]

        return answer
#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        answer = [0 for i in range(n)]
        ob=Solution()
        ob.getAnswer(arr, answer, n)
        print(*answer)

        T -= 1


if __name__ == "__main__":
    main()






# } Driver Code Ends