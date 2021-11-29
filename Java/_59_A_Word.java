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
public class _59_A_Word {
    
    
    public static void main(String[]args)
    {
        
        Scanner inp=new Scanner(System.in);
        
       String s=inp.next();
       
       char []ch=s.toCharArray();
       
       int small=0;
       int capital=0;
       
       for(int i=0;i<s.length();i++)
           
       {
           if(ch[i]>64&&ch[i]<91)
           {
               capital++;
           }
           else{
               
               small++;
           }
           
           
       }
       if(capital>small)
       {
           
           System.out.println(s.toUpperCase());
            
       }
      else if(capital<small)
       {
           
           System.out.println(s.toLowerCase());
            
       }
       else 
       {
            System.out.println(s.toLowerCase());
           
       }
       
        
        
    }
    
}
