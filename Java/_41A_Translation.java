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
public class _41A_Translation {
    
    public static void main(String []args)
    {
        
        Scanner inp=new Scanner(System.in);
        
        String s=inp.next();
        String s1=inp.next();
        
        char [] ch=s.toCharArray();
        char [] ch1=s1.toCharArray();
        int m=s.length();
        int t=m-1;
        int flag=0;
        int i;
        //System.out.println(t);
        if(s.length()!=s1.length())
        {
            System.out.println("NO");
            
        }
        else
        {
            
             for(i=0;i<m;i++)
        {
              
            if(ch[i]!=ch1[t-i])
            {
                flag=1;
               break;
            }
           
         
           
            //System.out.println(ch[i]+"="+ch1[t-i]+"("+(t-i));
           
        }
        if(flag==1)
        {
            System.out.println("NO");
           
        }
        else
        {
            System.out.println("YES");
        }
        
            
        }
       
        
        
        
    }
    
}
