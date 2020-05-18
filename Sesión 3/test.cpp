#include"Board.h"
#include"User.h"

//Circular Reference

int main()
{
    User* peter = new User("Peter");
    User* bob = new User("Bob");

    Board* peterBoard = new Board(peter);
    Board* bobBoard = new Board(bob);

    peter->writeOnBoard(bobBoard, "hola Bob cómo estás");
    bob->writeOnBoard(peterBoard, "hola Peter cómo estás");
    peter->writeOnBoard(peterBoard, "muy bien, muchas gracias");

    peterBoard->printBoard();

    //destruir apuntadores

    delete peter;
    delete bob;
    delete peterBoard;
    delete bobBoard;

}