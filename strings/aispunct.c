int aispunct (int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122 || c == 32 || c >= 0 && c <= 9)
		return 0;
	else
		return 1;
}

