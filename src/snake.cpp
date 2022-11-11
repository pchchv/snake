#include "snake.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

SnakeBody::SnakeBody()
{
}

SnakeBody::SnakeBody(int x, int y) : mX(x), mY(y)
{
}

int SnakeBody::getX() const
{
    return mX;
}

int SnakeBody::getY() const
{
    return mY;
}

bool SnakeBody::operator==(const SnakeBody &snakeBody)
{
    return (this->getX() == snakeBody.getX() && this->getY() == snakeBody.getY());
}
