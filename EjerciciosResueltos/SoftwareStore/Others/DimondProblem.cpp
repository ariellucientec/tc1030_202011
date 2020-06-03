#include<iostream>
using namespace std;
class Base {
public:
  void both(){}
  virtual void leftOperation() = 0;
  virtual void rightOperation() = 0;
};

class LeftChild : public virtual Base {
public:
  virtual void leftOperation();
};

void LeftChild::leftOperation()
{ 
    cout << "performing left operation and trying to call right operation. is it possible?" << endl;
    rightOperation(); 
}

class RightChild : public virtual Base {
public:
  virtual void rightOperation();
};

void RightChild::rightOperation()
{ 
    cout<<"performing right operation and tryin to call right operation. is it possible?" << endl; 
}

class GrandSon : public LeftChild, public RightChild{
public:
  
};

int main()
{
  LeftChild* l = new GrandSon;
  RightChild* r = new GrandSon;

  l->leftOperation();
  r->leftOperation();

  GrandSon g;
  g.both();
}