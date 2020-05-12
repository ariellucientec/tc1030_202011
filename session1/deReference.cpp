#include<iostream>
using namespace std;

int main()
{
    int integerValue = 10;
    double doubleValue = 0.23023;
    char charValue = 'a';

    int *pointer2int = &integerValue;           
    double *pointer2double = &doubleValue;     
    char *pointer2char = &charValue;         

    cout <<" la dirección que guarda pointer2int es " << pointer2int << " y su contenido es " << *pointer2int << endl; 
    cout <<" la dirección que guarda pointer2double es " << pointer2double << " y su contenido es " << *pointer2double << endl; 
    cout <<" la dirección que guarda pointer2char es " << pointer2char << " y su contenido es " << *pointer2char << endl; 
    
}