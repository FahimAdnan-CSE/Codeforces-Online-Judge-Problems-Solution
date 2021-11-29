package codeforces;

import java.util.Arrays;
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
public class _339_A_Helpful_Maths {
    
    
    public static void main (String [] args)
    {
        
        Scanner inp=new Scanner (System.in);
        
        
        String s;
        
        s = inp.nextLine();
        int ln= s.length();
        
        char[] c=s.toCharArray();
        
        char [] arry=new char[ln];
         char [] arry1=new char[ln];
         int cs=0,cs1=0;
        
        int i;
        
        for(i=0;i<ln;i=i+2)
        {
            
            arry[cs]= (char) (c[i]);
            cs++;
             
        }
        
       for(i=1;i<ln;i=i+2)
       {
           
           
           arry1[cs1]= (char) (c[i]);
            
            cs1++;
           
       }
       
        
       Arrays.sort(arry,0,cs);
      
       // System.out.println(cs);
            //System.out.println(cs1);
       int n=cs-1;
       for(i=0;i<cs;i++)
       {
           
           System.out.print(arry[i]);
         if(i==n){
         
        break;
         }
         System.out.print(arry1[i]);
         
         
         }
            
           
       }
        
        
        
    }
    
    
    

