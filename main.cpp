#include <iostream>

using namespace std;

class Enemy
{
    public:
    Enemy(float positionX, float positionY, float sizeX, float sizeY, float attackPts)
    {
        _positionX = positionX;
        _positionY = positionY;
        _sizeX = sizeX;
        _sizeY = sizeY;
        _attackPts = attackPts;
    }
    float getPositionX()
    {
        return _positionX;
    }
     void setPositionX(float positionX)
    {
        _positionX = positionX;
    }
     float getPositionY()
    {
        return _positionY;
    }
     void setPositionY(float positionY)
    {
        _positionY = positionY;
    }
        float GetSizeX()
        {
            return _sizeX;
        }
        void setSizeX(float sizeX)
        {
            _sizeX = sizeX;
        }
        float GetSizeY()
        {
            return _sizeY;
        }
        void setSizeY(float sizeY)
        {
            _sizeY = sizeY;
        }
        float GetAttackPts()
        {
            return _attackPts;
        }
        void SetAttackPts(float attackPts)
        {
            _attackPts = attackPts;
        }
        float Health()
        {
            return _sizeX*_sizeY;
        }
        
    protected:
    float _positionX;
    float _positionY;
    float _sizeX;
    float _sizeY;
    float _attackPts;
};


int main()
{
    

    return 0;
}
