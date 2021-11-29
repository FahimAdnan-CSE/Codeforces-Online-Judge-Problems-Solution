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
public class _546_A_Soldier_and_Bananas {
    
    
   public static void main (String [] args ) 
   {
       
       
       Scanner inp= new Scanner (System.in);
       
       int a,b,c,i;
       
       a=inp.nextInt();
       b=inp.nextInt();
       c=inp.nextInt();
       
       int sum=0;
       
      for(i=1;i<=c;i++)
      {
          
          sum=sum+(i*a);
          
      }
      
      if(sum>b)
      {
      
          System.out.println(""+(sum-b));
      
      }
      else
      {
          System.out.println("0");
      }
       
       
       
   }
    
    
    
}
