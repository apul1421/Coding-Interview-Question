package com.table.sparse;

import java.util.Scanner;

public class SparseArray {

	public static void main(String args[]) {
		int count=0;
		Scanner input = new Scanner(System.in);
		
		int N=input.nextInt();
		
		String[] strn = new String[N];
		
		for(int i=0;i<N;i++){
			input.nextLine();
			strn[i]=input.next();			
		}
		
		int Q=input.nextInt();
		
		String[] strq = new String[Q];
		
		for(int j=0;j<Q;j++){
			input.nextLine();
			strq[j]=input.next();
			
		}
		
		for(int i=0;i<Q;i++){
			count=0;
			for(int j=0;j<N;j++){
				if(strq[i].equals(strn[j])){
					count++;
				}
			}
			System.out.println(count);
		}
		
	}
	
}
