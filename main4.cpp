/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

/*class Enemy
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
};  */ 
class Weapon
{
    public:
        virtual float getAttackRange()
            {
                return _attackRange;
            }
            virtual void setAttackRange(float attackRange)
            {
                _attackRange = attackRange;
            }
    protected:
        float _attackRange;
};

class Cannon : public Weapon
        {
            public:
            Cannon(int attackDamage)
            {
                _attackDamage = attackDamage;
            }
            virtual float getAttackDamage()
            {
                return _attackDamage;
            }
            virtual void setAttackDamage(float attackDamage)
            {
                _attackDamage = attackDamage;
            }
            protected:
            float _attackDamage;
        };

class Grenade : public Weapon
{
    public:
    Grenade(int blastDamage, int blastRadius)
    {
        _blastDamage = blastDamage;
        _blastRadius = blastRadius;
    }
    virtual float getBlastRadius()
    {
        return _blastRadius;
    }
    virtual void setBlastRadius(float blastRadius)
    {
        _blastRadius = blastRadius;
    }
    virtual float getBlastDamage()
    {
        return _blastDamage;
    }
    virtual void setBlastDamage(float blastDamage)
    {
        _blastDamage = blastDamage;
    }
    protected:
    float _blastDamage;
    float _blastRadius;

};

class Railgun : public Weapon
{
    public: 
        Railgun(int beamDamage)
        {
            _beamDamage = beamDamage;
        }
        virtual float getBeamDamage()
        {
            return _beamDamage;
        }
        virtual void setBeamDamage(float beamDamage)
        {
            _beamDamage = beamDamage;
        }
    protected:
        float _beamDamage;
};

int Display()
{
    cout <<" ||_" << endl << "(_oo" << endl << " |" << endl << "[|]" << endl << " |" << endl << " LL ";
    srand(time(0));
    int N = rand() % 30 + 5;
    for(int idx=0; idx < N; idx++)
    {
    cout << "_ ";
    }
    cout << "╭∩╮(-_-)╭∩╮";
    
    return N;
    
}

float Distance(float& power, float& angleShot)
{
    float distance = 0;
    distance = (((power*power)*sin(2*(angleShot*(3.14159265/180))))/(9.8));
    return distance;
}

float mDistance(int &N)
    {
        float output = N * 10;
        return output;  
    }

int main()
{
    float angleShot = 0.0;
    float power = 0.0;
    int ehealth = 100;
    bool run2 = true;
    
    while (run2)
    {
    bool run = true;
    int dashCount = Display();
    int mDistance = dashCount * 10;
    
    srand(time(0));
    int N2 = rand() % 3 + 1;
    Weapon* w;
    
    switch(N2)
    {
        case 1:
            w = new Grenade(15, 50);
            break; 
        
        case 2:
            w = new Cannon(25);
            break;
            
        case 3:
            w = new Railgun(50);
            break;
            
        default:
            return 0;
    }
    
    while(N2 == 2)
    {
        while(run)
        {
            cout << endl << endl << "Enter an angle above the horizontal (degrees): " << endl;
            cin >> angleShot;
            if(angleShot <= 90 and angleShot >= 0)
                {
                    run = false;
                }
            else
            {
                cout << endl << "Please enter an angle between 0 and 90 degrees." << endl;
            }
        }   
        cout << endl << "Enter weapon velocity (m/s): " << endl;
        cin >> power;
    
        if (Distance(power, angleShot) >=mDistance and Distance(power, angleShot) <= (mDistance + 30))
        {
            cout << "Your attack has hit the enemy!" << endl;
            //ehealth -= attackDamage;
        }
    
        else if (Distance(power, angleShot) < mDistance)
        {
            cout << "Your attack has missed short." << endl;
        }
    
        else if (Distance(power, angleShot) > (mDistance + 30))
        {
            cout << "Your attack has missed long." << endl;
        }
        break;
    }

    }
    
    return 0;
}
