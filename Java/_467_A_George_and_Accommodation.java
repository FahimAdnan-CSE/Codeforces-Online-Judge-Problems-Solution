package codeforces;


import static java.lang.Math.abs;
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
public class _467_A_George_and_Accommodation {
    
    
    
    public static void main(String [] args)
    {
        
        Scanner inp =new Scanner(System.in);
        
        
        int n=inp.nextInt();
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            int p,q;
            
            p=inp.nextInt();
            q=inp.nextInt();
            
            if(abs(p-q)>=2)
            {
                count++;
            }
            
            
        }
        
        System.out.println(count);
        
        
        
    }
    
}
