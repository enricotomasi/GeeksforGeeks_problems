// { Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}



function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let arr = readLine().trim().split(" ").map((x) => parseInt(x));
        let mod=1000000007;
        let obj = new Solution();
        let res = obj.product(arr, n,mod);
        if(res === -0) res = 0;
        console.log(res.toString());
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 * @param {number} mod
 * @return {number} 
*/
class Solution {
    product(arr, n,mod){
        //code here
        
        let ans = arr[0];
        
        for (let i=1; i<n; i++) {
            ans = (ans*arr[i]) % mod;
        }
        
        return ans % mod;
        
    }
}