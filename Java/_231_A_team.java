/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codeforces;

import java.util.Scanner;

/**
 *
 * @author Fahim Adnan
 */
public class _231_A_team {
    
    
    
    public static void main (String[]args)
    {
        
        Scanner inpobj=new Scanner (System.in);
        
        int  n =inpobj.nextInt();
        int i,count=0;
        
        for(i=0;i<n;i++)
        {
            
         int a,b,c;
         
         a=inpobj.nextInt();
         b=inpobj.nextInt();
         c=inpobj.nextInt();
         
         int temp=a+b+c;
         
         if(temp>1)
         {
             
             count++;
         }
            
            
        }
        System.out.println(""+count);
        
        
        
        
    }
    
    
}
