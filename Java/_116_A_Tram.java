/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package codeforces;

import static java.lang.Math.abs;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

/**
 *
 * @author Fahim Adnan
 */
public class _116_A_Tram {
    
    
    
    public static void main(String []args)
    {
        
       Scanner inp=new Scanner (System.in); 
       
       
       int n = inp.nextInt();
       
       int sum=0;
      Integer [] ar=new Integer[n];
      for(int i=0;i<n;i++)
      {
          int a=inp.nextInt();
          int b=inp.nextInt();
          
         sum=abs(sum-a);
         sum=sum+b;
          ar[i]=sum;
          
          
        

                
      }
     
      Arrays.sort(ar,Collections.reverseOrder());
      
      
     
        System.out.println(ar[0]);
          
        
    }
    
}
