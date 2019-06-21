long fact(unsigned int number){
    long result;

    if(number == 0) return 1;
    
    for(result = number; number > 0; number--) result *= number;
    return result;
}
