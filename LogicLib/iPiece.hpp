#pragma once
class iPiece
{
private:
    char id;
    char color;
public:
    iPiece(/* args */)=default;
    virtual void move(int x, int y) = 0;
    char getID(){return id;}
    void setID(char id){this->id = id;};
    char getColor(){return color;}
    void setColor(char color){this->color = color;}
    virtual ~iPiece()=default;
    
};

