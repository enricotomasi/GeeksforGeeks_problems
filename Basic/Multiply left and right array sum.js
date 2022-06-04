 
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
        let arr =readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res = obj.multiply(arr,n);
        if(res === -0)
            res = 0;
        console.log(res);
        
    }
}
// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 * @return {number}
*/

class Solution {
    multiply(arr,n){
       //code here
       // const debug = false;
       
       const meta = Math.floor(n/2);
       
       let uno = 0;
       let due = 0;
       
       for (let i=0; i<meta; i++) {
           uno += arr[i];
           // if (debug) console.log(`uno: ${i} *** ${arr[i]}`);
       }
       
       for (let i=meta; i<n; i++) {
           due += arr[i];
            // if (debug) console.log(`due: ${i} *** ${arr[i]}`);
       }
       
       return (uno*due);
       
    }
}