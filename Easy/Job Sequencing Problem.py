#User function Template for python3

class Solution:
    
    #Function to find the maximum profit and the number of jobs done.
    def JobScheduling(self, jobs, n):
        # code here
        jobs.sort(key = lambda x: (-x.profit, x.deadline))
        
        maxdl = -1
        
        for it in jobs:
            maxdl = max(maxdl, it.deadline)
            
        #print(f"max dead line: {maxdl}")
        
        tt = []
        for i in range(1, maxdl + 1):
            tt.append(i)
            
        #print(f"timetable: {tt}")
        
        job = 0
        profit = 0
        
        for it in jobs:
            dl = it.deadline
            p = it.profit
            
            slot = -1
            for it in tt:
                if it > dl:
                    break
                slot = it
            
            #print(f"job dl: {dl}, profit: {p} # take slot: {slot}")
            
            if slot > 0:
                tt.remove(slot)
                job += 1
                profit += p
        
        
        return [job, profit]

#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha
class Job:
    '''
    Job class which stores profit and deadline.
    '''
    def __init__(self,profit=0,deadline=0):
        self.profit = profit
        self.deadline = deadline
        self.id = 0

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        info = list(map(int,input().strip().split()))
        Jobs = [Job() for i in range(n)]
        for i in range(n):
            Jobs[i].id = info[3*i]
            Jobs[i].deadline = info[3 * i + 1]
            Jobs[i].profit=info[3*i+2]
        ob = Solution()
        res = ob.JobScheduling(Jobs,n)
        print (res[0], end=" ")
        print (res[1])
# } Driver Code Ends