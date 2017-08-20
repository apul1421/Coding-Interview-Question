package com.word.counter;

import java.util.HashMap;
import java.util.Scanner;

public class WordCounter {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		String[] word = input.nextLine().split(" ");
		 
		HashMap<String,Integer>wordcounter = new HashMap<String,Integer>();
		for(String s:word)
		{
			if(wordcounter.containsKey(s)) {				
				wordcounter.replace(s, wordcounter.get(s) + 1);				
			}
			else {
				 wordcounter.put(s, 1);
			}
			
		}
		
		for(int i=0;i<word.length;i++) {
		System.out.println(word[i]);
		}
		System.out.println(wordcounter);
		
	}
	
	
}
