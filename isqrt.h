int isqrt(int radicando){
	int risultato = 0, temp, shift;

	if(radicando < 0) return -1;
	else if(radicando = 0) return 0;
	else{
		 for(shift = 30; shift > -1; shift--){
			temp = risultato + (1 << shift);
			temp *= temp;
			if(temp == radicando) return temp;
			else if(temp < radicando) risultato |= temp;
		}
	}

	return risultato;
}
