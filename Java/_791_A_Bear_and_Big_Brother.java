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
public class _791_A_Bear_and_Big_Brother {
    
    public static void main(String []args)
    {
        
        Scanner inp=new Scanner (System.in);
        
        int a,b;
        a=inp.nextInt();
        b=inp.nextInt();
        
        int sum;
        int sum1;
        sum=a;
        sum1=b;
        int count=0;
        int i;
        for(;;)
        
        {
            
                  count++;
            sum=sum*3;
            sum1=sum1*2;
            
            if(sum>sum1)
            {
                break;
            }
     
            
            
        }
        
        System.out.println(count);
        
    }
    
}
