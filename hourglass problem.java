/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;

public class Main
{
	public static void main(String[] args) {
	    int a[][]=new int[6][6];
	    int sum=0,max=-32767;
	    Scanner sc=new Scanner(System.in);
	    for(int i=0;i<=5;i++){
	        for(int j=0;j<=5;j++)
	        a[i][j]=sc.nextInt();
	    }
	    for(int i=0;i<=3;i++){
	           for(int j=0;j<=3;j++){
	               sum=0;
	            sum+=a[i][j]+a[i][j+1]+a[i][j+2]+
	                 a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]+
	                 a[i+1][j+1];
	                 if(sum>max)
	                 max=sum;
	           }
	    }
		System.out.println(max);
	}
}
