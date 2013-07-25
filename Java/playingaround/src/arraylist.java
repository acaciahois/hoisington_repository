import java.util.ArrayList;
import java.util.Scanner;

public class ArrayListExample
{
	public static void main(String args[])
	{
		ArrayList<String> animalList = new ArrayList<String>();
		Scanner scan = new Scanner(System.in);
		String name;
		boolean again;

		animalList.add("Lucky");
		animalList.add("Miley");
		animalList.add("Ginger");

		System.out.print("The names are: " + animalList);
		System.out.println();

		do
		{
			System.out.print("Which animal will you take? ");
			name = scan.next();

			switch(name)
			{
				case "Lucky" :
				{
					if(animalList.contains("Lucky"))
					{
						animalList.remove("Lucky");
						break;
					}
					else
					{
						System.out.println(name + " has already been taken!");
						break;
					}
				}
				case "Miley" :
				{
					if(animalList.contains("Miley"))
					{
						animalList.remove("Miley");
						break;
					}
					else
					{
						System.out.println(name + " has already been taken!");
						break;
					}
				}
				case "Ginger" :
				{
					if(animalList.contains("Ginger"))
					{
						animalList.remove("Ginger");
						break;
					}
					else
					{
						System.out.println(name + " has already been taken!");
						break;
					}
				}
				default :
				{
					System.out.println(name + " doesn't exist!");
					break;
				}
			}

			System.out.print("Animals left: " + animalList);
			System.out.println();
			System.out.print("Take another animal? ");
			again = scan.nextBoolean();
		}
		while(again == true);
	}
}