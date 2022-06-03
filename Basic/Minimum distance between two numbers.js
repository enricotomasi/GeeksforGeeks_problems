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
        let a = new Array(n);
        let input_ar = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++)
            a[i] = input_ar[i];
        let obj = new Solution();
        let input = readLine().split(' ').map(x=>parseInt(x));
        let x = input[0];
        let y = input[1];
        let ans = obj.minDist(a,n,x,y);
        console.log(ans);
        
    }
}// } Driver Code Ends


//User function Template for javascript

/**
 * Function to Minimum distance between two numbers
 * @param {number[]} a
 * @param {number} n
 * @param {number} x
 * @param {number} y
 * @returns {number[]}
*/
class Solution {
  
    minDist(a, n, x, y){
        // code here
        
        let ix = [];
        let iy = [];
        
        for (let i=0; i<n; i++){
            let numero = a[i];

            if (numero == x) 
                ix.push(i);

            if (numero == y) 
                 iy.push(i);
        }
        
        if (ix.length === 0 || iy.length === 0) return -1;
        

        let minDist = 10000000;
        for (let i=0; i<ix.length; i++) {
            let nx = ix[i];
            for (let j=0; j<iy.length; j++){
                let ny = iy[j];
                minDist = Math.min(minDist, Math.abs(nx-ny));
            }
        }
        
        return minDist;
        
    }
}