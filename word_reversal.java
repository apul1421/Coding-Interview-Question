package word_reversal;

import java.util.Scanner;

public class Word_reversal {

    /**
     * @param args the command line arguments
     */
	public static void main (String[] args)
	 {    
Scanner input = new Scanner(System.in);
	    int t = input.nextInt();	   
	    while(t>0) {
	        String str = input.next();
	        String[] split = str.split("\\.");
	        String reverse = "";
	        for(int i = split.length-1; i>-1; i--) {
	            reverse = reverse + split[i];
	            if(i != 0) {
	                reverse = reverse + ".";
	            }
	        }
	        System.out.println(reverse);
                t--;
	    }       
    }
    
}
