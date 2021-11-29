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
public class _112_A_Petya_and_Strings {
    
   
    public static void main(String []args)
    {
        
       Scanner inp =new Scanner(System.in);
       
       String a,b,f,g;
       int i;
       
       f=inp.nextLine();
       g=inp.nextLine();
       
      a= f.toLowerCase();
       b=g.toLowerCase();
       
        //System.out.println(""+a);
        //System.out.println(""+a);
        
       
       char  [] s1=a.toCharArray();
       char  [] s2=b.toCharArray();
       
       int ln=a.length();
       
       char [] ch= new char[200];
       
       for(i=0;i<ln;i++)
       {
           
           if(s1[i]>64&&s1[i]<91)
           {
           
             s1[i]=(char) (s1[i]+32);
             
           
           }
           if(s2[i]>64&&s2[i]<91)
           {
               
               s2[i]=(char) (s2[i]+32);
           }
            
        
    }
       if(a.equals(b))
       {
           System.out.println("0");
       }
       else
       {
       for(i=0;i<ln;i++)
       {
           
           if(s1[i]!=s2[i])
           {
               if(s1[i]<s2[i])
               {
                   System.out.println("-1");
               }
               else if(s1[i]>s2[i])
               {
                   System.out.println("1");
               }
               break;
               
           }
       
       
       }
       
           
           
           
           
       }
       
       
       
    
    
    
}
}