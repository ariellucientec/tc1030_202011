    #include"Board.h"
    #include"User.h"
    
    void Board::writeMessage(User* user, string message)
    {
        allMessages += user->getName() + ": " + message + "\n";
    }
    void Board::printBoard()
    {
        cout << owner->getName() << "'s board";
        cout << "-----------------------------------------------------\n";
        cout << allMessages;
        cout << "-----------------------------------------------------\n";
    }
    void Board::clearMessages()
    {
        allMessages = "";
    }
    int Board::howManyMessages(User*)
    {
        //
    }

    Board::Board(User* owner)
    {
        this->owner = owner;
    }



    