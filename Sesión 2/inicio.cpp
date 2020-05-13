#include<string>
using namespace std;
class Persona
{
private:    //modificadores de acceso
    int edad;
    string nombre;
    Persona* papa;  //No es instancia 
public:
    Persona()  //constructor por default
    {
        edad = 0;
        nombre = "";
    }
    Persona(int laEdad, string elNombre, Persona *elPapa) //constructor con parámetros
    {
        edad = laEdad;
        nombre = elNombre;
        papa = elPapa;
    }
    
protected:
};

int main()
{
   int a;
   Persona* pedro = new Persona;
   Persona* juan = new Persona(20, "juan", pedro);
   Persona pedrito = Persona(15, "pedrito", pedro);
}



