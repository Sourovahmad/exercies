#include <unistd.h>



int main(int argc, char **argv)
{
	if (argc != 3) {
		write(1, "\n", 1);
		return 0;
	}
	
	
	int loop_a = 0;
	int loop_b  = 0;
	int conditionMatch = 0;	

	// hello			
	// youHello argv2

	while (argv[1][loop_a] != '\0' )
	{	
		char currentChar = argv[1][loop_a];
		while (argv[2][loop_b])
		{
			if(currentChar == argv[2][loop_b])			
			{
				conditionMatch += 1;
				break;
			 }
		 loop_b ++;
		}	  
	loop_b += 1;	
	loop_a ++;
	}
	

	if(conditionMatch == loop_a){
		int a = 0;
		while(argv[1][a] != '\0')
		{

			 write(1,&argv[1][a],1);
                	a++;
		}
	}
	
	return 0;
 }

