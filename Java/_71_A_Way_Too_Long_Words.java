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
public class _71_A_Way_Too_Long_Words {
    
    
    public  static void main (String[]args)
    {
        Scanner  inp=new Scanner (System.in);
        
        int n=inp.nextInt();
        int i;
        
        for(i=0;i<n;i++)
        {
            
            String s=inp.next();
            
            int k=s.length();
            char[] ch = s.toCharArray();
           
            if(k<11)
            {
                System.out.println("\n"+s);
            }
            else
            {
                System.out.println(""+ch[0]+""+(k-2)+""+ch[k-1]);    
                    
            }
           
            
        }
        
        
        
        
        
        
    }
    
    
    
    
}
