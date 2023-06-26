void rev_string(char *s)
{
	int i = 0, a, b;
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}
	b = i - 1;

	for (a = 0 ; b >= 0 && a < b; b--, a++)
	{
		rev = s[a];
		s[a] = s[b];
		s[b] = rev;
	}
}
