int fat ( int a)
{
	int i;
	for(i = 1; a > 1; a = a - 1){
		i = i * a;
	}
return i;
}

int exp ( int a, int b)
{
	int i, pot = a;
     for ( i = 1; i < b; i++ ) 
     {
        pot = pot * a;
     }
return pot;
}

