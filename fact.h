long fact(unsigned int number){
    long result;

    for(result = number; number > 0; number--) result *= number;
    return result;
}
