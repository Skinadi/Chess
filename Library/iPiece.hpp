#pragma once
class iPiece
{
private:
    char id;
public:
    virtual void move(int x, int y) = 0;
    char getID(){return id;}
    void setID(char id){this->id = id;};
    //char operator[](int a) {return id;}
    iPiece(/* args */)=default;
};

