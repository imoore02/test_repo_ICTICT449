//this function will count the number of even numbers in an int array//

int count(int array[], int n)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] % 2 == 0)
			count++;
	}
	return count;
}
