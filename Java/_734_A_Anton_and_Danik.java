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
public class _734_A_Anton_and_Danik {
    
    
    
    public static void main(String [] args)
    {
        
        Scanner inp=new Scanner(System.in);
        
        int n=inp.nextInt();
        
        String s=inp.next();
        
        char []ch=s.toCharArray();
        
        int A=0;
        int D=0;
        
        for(int i=0;i<n;i++)
        {
            
            if(ch[i]=='A')
            {
                A++;
            }
             if(ch[i]=='D')
            {
                D++;
            }
            
            
        }
        
        if(A>D)
        {
            
            System.out.println("Anton");
        }
        else if(A<D)
        {
            
            System.out.println("Danik");
        }
        else
        {
            System.out.println("Friendship");
        }
        
        
        

        
        
    }
    
}
