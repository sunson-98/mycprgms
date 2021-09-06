int get_hash_key(int v)
{
	if(v >= 0 && v < 25 || v == 25)
		return 0;
	else if(v >= 26 && v <= 50 || v == 50)
		return 1;
	else if(v >= 51 && v < 75 || v == 75 )
		return 2;
	else if(v >= 76 && v < 100 || v == 100)
		return 3;
}

		
