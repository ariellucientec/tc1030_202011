//forward declaration

class Wife;

class Husband
{
    Wife* w;
public:
    Wife* getWife();
};

class Wife
{
    Husband* h;
public:
    Husband* getHusband()
    {
        return h;
    }
};

Wife* Husband::getWife()
{
    return w;
}

Husband* Wife::getHusband()
{
    return h;
}

int main()
{
    Wife* w = new Wife;
    Husband* h = new Husband;
    //w->setHusband(h);
    //h->setWife(w);
}


