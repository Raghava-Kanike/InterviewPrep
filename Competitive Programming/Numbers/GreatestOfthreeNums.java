package prep.numbers;

import java.util.Scanner;

public class GreatestOfthreeNums {

	public static void main(String[] args) {
	  Scanner sc=new Scanner(System.in);
	  System.out.println("enter value of a:");
	  int a=sc.nextInt();
	  System.out.println("enter value of b:");
	  int b=sc.nextInt();
	  System.out.println("enter value of c:");
	  int c=sc.nextInt();
	  
	  System.out.println("entered values are \n a: "+a+" b: "+b+" c: "+c);
	  String res=(a>b && a>c)?" a is greater: "+a:((b>c)?"b is greater: "+b:"c is greater: "+c);
	  
	  System.out.println(res);
	  
	  
		

	}

}
