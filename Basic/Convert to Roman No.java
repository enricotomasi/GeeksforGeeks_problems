// { Driver Code Starts
import java.util.Scanner;
import java.util.*;

class GFG
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int N = sc.nextInt();
			
			Solution ob = new Solution();
			System.out.println(ob.convertToRoman(N));
			t--;
		}
	}
}// } Driver Code Ends


//User function template for JAVA

// PS ODIO i numeri romani....

// Odio questo problema

// Odio gli antichi romani

// OK odio un po' troppe cose :-)

// Lo so il codice fa schifo, però mi faceva venire mal di testa
// i numeri romani non li so calcolare nemmeno a mano... Mi stanno antipatici :D

class Solution
{
	String convertToRoman(int n) {
		//code here
		
		String ans = "";
		int i = n;
		
	    while (i>0){
	        //System.out.println();
	        //System.out.println(ans);
	        //System.out.println(i);
	        
	        if (i>=1000) {
	            ans += 'M';
	            i-=1000;
	            continue;
	        }
	        
	        if (i==1000) {
	            ans += 'M';
	            break;
	        }
	        
	        if (i==900) {
	            ans += "CM";
	            break;
	        }
	        
	        if (i==800) {
	            ans += "DCCC";
	            break;
	        }
	        
	        if (i==700) {
	            ans += "DCC";
	            break;
	        }
	        
	        if (i==600) {
	            ans += "DC";
	            break;
	        }
	        
	        if (i==500) {
	            ans += 'D';
	            break;
	        }
	        
	        if (i==400) {
	            ans += "CD";
	            break;
	        }
	        
	        if (i==100) {
	            ans += 'C';
	            break;
	        }
	        
	        if (i==40) {
	            ans +="XL";
	            break;
	        }
	        
	        if (i==50) {
	            ans += 'L';
	            break;
	        }
	        
	        if (i==10) {
	            ans += 'X';
	            break;
	        }
	        
	        if (i==4) {
	            ans += "IV";
	            break;
	        }
	        
	        if (i==5) {
	            ans += 'V';
	            break;
	        }
	        
	        if (i==6) {
	            ans += "VI";
	            break;
	        }
	        
	        if (i==7) {
	            ans += "VII";
	            break;
	        }
	        
	        if (i==8) {
	            ans +="VIII";
	            break;
	        }
	        
	        if (i==9) {
	            ans += "IX";
	            break;
	        }
	        
	        if (i==1) {
	            ans += 'I';
	            break;
	        }
	        
	        if (i>900) {
	            i-=900;
	            ans += "CM";
	            continue;
	        }
	        
	        if (i>800){
	            i-=800;
	            ans += "DCCC";
	            continue;
	        }
	        
	        if (i>700) {
	            i-=500;
	            while (i<0){
	                ans+='C';
	                i+=100;
	            }
	            ans += 'D';
	            continue;
	        }
	        
	        if (i>500) {
	            i-=500;
	            ans += 'D';
	            continue;
	        }
	        
	        if (i>400) {
	            i-=400;
	            ans += "CD";
	            continue;
	        }
	        
	        if (i>100) {
	            ans +='C';
	            i-=100;
	            continue;
	        }
	        
	        if (i>90)
	        {
	            i-=100;
	             while (i<0){
	                ans+='X';
	                i+=10;
	            }
	            ans += 'C';
	            continue;
	        }
	        
	        if (i>50) {
	            i-=50;
	            while (i<0) {
	                ans+='X';
	                i+=10;
	            }
	            ans += 'L';
	            continue;
	        }
	        
	        if (i>40){
	            i-=40;
	            ans += "XL";
	            continue;
	        }
	        
	        if (i>10) {
	            ans += 'X';
	            i-=10;
	            continue;
	        }
	        
	        if (i>5) {
	            i-=10;
	            while (i<0) {
	                ans += 'I';
	                i+=1;
	            }
	            ans += 'X';
	            continue;
	        }
	        
	        if (i>1) {
	            ans +='I';
	            i-=1;
	            continue;
	        }
	    }
	    return ans;
	}
}