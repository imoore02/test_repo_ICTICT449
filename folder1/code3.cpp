double array_mean(int array[], int n)
{
	double mean = 0.0;
	int sum = 0;

	if (n >= 1)
	{
		for (int i = 0; i < n; i++)
			sum += array[i];
		mean = sum/n;
	}

	return (mean);
}