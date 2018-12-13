main()
{
	const int bars=100, tone=5;
	int result[bars][tone];
	int r;
	srand((unsigned)time(NULL));
	for(int i = 0; i < bars; i++)
	{
		printf (" %d : ", i);
		for(int j = 0; j < tone; j++)
		{
			r = rand();
			result[i][j] = r - int (r / 12)*12;
			printf (" %d, ", result[i][j]);
		}
		printf ("\n");
	}
}