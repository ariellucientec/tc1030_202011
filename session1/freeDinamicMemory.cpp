#include<string>
using namespace std;

int main()
{    
    int *pointer2int;           
    float *pointer2float;
    string *pointer2string;

    pointer2int = new int;
    pointer2float = new float;
    pointer2string = new string;

    *pointer2int = 323;
    *pointer2float = 323.3f;
    *pointer2string = "échale ganitas para no reprobar";

    delete pointer2int;
    delete pointer2float;
    delete pointer2string;

    return 0;
}
