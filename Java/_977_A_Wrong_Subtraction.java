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
public class _977_A_Wrong_Subtraction {
    
    
    
    public static void main(String []args)
    {
        
        
        Scanner inp = new Scanner(System.in);
        
        long n=inp.nextInt();
        int k=inp.nextInt();
        
        for(int i=0;i<k;i++)
        {
            
            int c=(int)(n%10);
             
             
             if(c!=0)
             {
                 n=n-1;
                 
             }
             else
             {
                 n=n/10;
             }
            
           
            
        }
           
        System.out.println(n);
        
        
        
        
    }
    
}
