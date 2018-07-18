/*
Complete the method which accepts an array of integers, and returns one of the following:

"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
You can assume the array will always be valid, and there will always be one correct answer.
*/

char* isSortedAndHow(int* array, int arrayLength)
{
	int cont1=0, cont2=0;
	char* string;

	for(int i=1; i<arrayLength; i++)
	{
		if (array[i-1] <= array[i])
		{
			cont1++;
		}
		else if (array[i-1] >= array[i])
		{
			cont2++;
		}
	}

	if (cont1 == (arrayLength-1))
	{
		string = "yes, ascending";
	}
	else if (cont2 == (arrayLength-1))
	{
		string = "yes, descending";
	}
	else
	{
		string = "no";
	}

	return string;
}
