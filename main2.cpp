/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
class Gun
        {
            public:
            float getAttackRange()
            {
                return _attackRange;
            }
            void setAttackRange(float attackRange)
            {
                _attackRange = attackRange;
            }
            float getAttackDamage()
            {
                return _attackDamage;
            }
            void setAttackDamage(float attackDamage)
            {
                _attackDamage = attackDamage;
            }
            private:
            float _attackRange;
            float _attackDamage;
        };


void Display()
{
    cout <<" ||_" << endl << "(_oo" << endl << " |" << endl << "[|]" << endl << " |" << endl << " LL ";
    srand(time(0));
    int N = rand() % 30 + 5;;
    for(int idx=0; idx < N; idx++)
    {
    cout << "_ ";
    }
    cout << "╭∩╮(-_-)╭∩╮";
    
}


int main()
{
    Display();
    
    return 0;
}
