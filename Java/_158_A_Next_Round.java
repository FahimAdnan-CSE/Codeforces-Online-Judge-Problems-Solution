package codeforces;

import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Fahim Adnan
 */
public class _158_A_Next_Round {
    
    
    public static void main(String [] args)
    {
        
        int k,n,i;
        
        
        Scanner inp=new Scanner(System.in);
         n=inp.nextInt();
        k=inp.nextInt();
        int sum=0;
        int []ar=new int[n];
        
       for(i=0;i<n;i++)
       {
           ar[i]=inp.nextInt();
           sum=sum+ar[i];
           
       }    int count=0;
        
        if(sum==0)
        {
            System.out.println(""+sum);
                   
        }
    
        else
        {
            
            for(i=0;i<n;i++)
       {
           
           if(ar[i]>=ar[k-1]&&ar[i]>0)
           {
               count++;
           }
           
           
       }
            
             System.out.println(""+count);
        }
       
        
    }
    
    
    
}
