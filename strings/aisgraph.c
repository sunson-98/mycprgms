int aisgraph (int c)
{
	if (c >= 0 && c <= 31 || c >= 65 && c <= 90 || c >= 97 && c <= 122 || c == 127 || c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

