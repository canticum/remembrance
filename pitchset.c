main()
{
	const int bars=100, tone=5, same=2;
	int result[bars][tone];
	int r;
	srand((unsigned)time(NULL));
	for(int i=0;i&lt;100;i++)
	{
		printf (&quot; %d : &quot;, i);
		for(int j = 0; j &lt; 5;j++)
		{
			r = rand();
			result[i][j] = r - int (r / 12)*12;
			printf (&quot; %d, &quot;, result[i][j]);
		}
		printf (&quot;\n&quot;);
	}
}