import java.util.Scanner;
import java.util.ArrayList;


public class finalproject1 
{
	public static void main (String []args)
	{
		System.out.println("Welcome to Acacia's Game: Movie Quote Trivia");
		// don't know if i want to include this: System.out.println("The rules are fairly simple.  The computer will give you a movie quote and you must guess the movie it's from.")
		System.out.println("Let's begin.");
		
		Scanner userInput = new Scanner (System.in);
		System.out.println("1." + "'Get to zhe Choppa!'");
		String input = userInput.next();
			if (input == "Predator")
			{
				System.out.println("Correct!");
				
			}
			else
			{
				System.out.println("Incorrect.  Would you like to try again or do you give up?");
					if(input == "Try again") //NEED TO WORK ON
					{
						
					}
			
					else if (input == "I give up")
					{
						System.out.println("The answer is: Predator(1987}");
						
					}
			}
			System.out.println();
			}

		
			
		
		
}
