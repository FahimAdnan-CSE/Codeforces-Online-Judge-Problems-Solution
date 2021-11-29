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
public class _281_A_Word_Capitalization {
    
    
    public static void main(String [] args)
    {
        Scanner inp = new Scanner (System.in);
        
        
        String s;
        
        s=inp.nextLine();
        
        
        char[] c=s.toCharArray();
        
        int ln=s.length();
        int i;
        
       for(i=0;i<ln;i++)
       {
           if (c[0]>64&&c[0]>91)
               
           {
              c[0]=(char) (c[i]-32);
               
           }
           System.out.print(c[i]);
           
           }
               
           
           
       }
        
        
    }
    
    

