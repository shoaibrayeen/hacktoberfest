import java.util.Scanner;
public class LargestSubSquare
{
	public static void main(String[] args)
	{
		Scanner scanner=new Scanner(System.in);
		int rows=scanner.nextInt();
		int cols=scanner.nextInt();
		int[][] matrix=new int[rows][cols];
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				matrix[i][j]=scanner.nextInt();
			}
		}
		int[][] dp=new int[rows][cols];
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				System.out.print(matrix[i][j]+" ");
			}
			System.out.println();
		}
		System.out.println();
		for(int i=0;i<rows;i++)
		{
			dp[i][0]=matrix[i][0];
		}
		for(int j=0;j<cols;j++)
		{
			dp[0][j]=matrix[0][j];
		}
		for(int i=1;i<rows;i++)
		{
			for(int j=1;j<cols;j++)
			{
				if(matrix[i][j]==0)
				{
					dp[i][j]=0;
				}
				else
				{
					dp[i][j]=Math.min(dp[i-1][j-1],Math.min(dp[i][j-1],dp[i-1][j]))+1;
				}
			}
		}
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				System.out.print(dp[i][j]+" ");
			}
			System.out.println();
		}
		int max=dp[0][0];
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				if(dp[i][j]>max)
				{
					max=dp[i][j];
				}
			}
		}
		System.out.println(max);
	}
}