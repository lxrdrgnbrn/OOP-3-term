#include "Damage.h"

Damage::Damage()
{
    Level=0;
    _Damage=0;
}

void Damage::SetDamage(double _Damage)
{
    this->_Damage=_Damage;
}

void Damage::SetLevel(int Level)
{
    this->Level=Level;
}

double Damage::GetDamage()
{
    return _Damage;
}

int Damage::GetLevel()
{
    return Level;
}

double Damage::Attack_Speed()
{
    return 0.1*Level;
}

double Damage::Total_Damage()
{
    return (_Damage*Level*0.5+Critical_Damage())*Attack_Speed()*60;
}

double Damage::Critical_Damage()
{
    srand(time(0));
    return _Damage*Level*0.5*(double)(rand()%10);
}

