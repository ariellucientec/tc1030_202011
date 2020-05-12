int main()
{
    int integerValue = 10;
    double doubleValue = 0.23023;
    char charValue = 'a';

    // La variable pointer2int guarda la dirección de la variable integerValue
    int *pointer2int = &integerValue;           
    
    // La variable pointer2double apunta a la dirección la variable doubleValue
    double *pointer2double = &doubleValue;     
    
    // La variable pointer2char apunta a la dirección de la variable charValue
    char *pointer2char = &charValue;         
}