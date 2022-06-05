 
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

function printList(res,n){
    let s="";
    for(let i=0;i<n;i++){
        s+=res[i];
        s+=" ";
    }
    console.log(s);
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        let n = input_ar1[0];
        let a = input_ar1[1];
        let d = input_ar1[2];
        let obj = new Solution();
        let res = obj.sum_of_ap(n, a, d);
        console.log(res);
        
    }
}// } Driver Code Ends

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number} n numero
 * @param {number} a primo
 * @param {number} d differenza
 * @returns {number}
*/

class Solution{
    sum_of_ap(numero, primo, differenza){
        //code here
        
        let ans = primo;
        let tempN = primo;
        for (let i=0; i<numero-1; i++) {
            tempN += differenza;
            ans += tempN;
        }
        
        return ans;
    }
}

