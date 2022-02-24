#include "Damage.h"

Damage::Damage()
{
    Level=0;
    _damage=0;
}

void Damage::SetDamage(double _damage)
{
    this->_damage=_damage;
}

void Damage::SetLevel(int Level)
{
    this->Level=Level;
}

double Damage::GetDamage()
{
    return _damage;
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
    return (_damage*Level*0.5+Critical_Damage())*Attack_Speed()*60;
}

double Damage::Critical_Damage()
{
    srand(time(0));
    return _damage*Level*0.5*(double)(rand()%10);
}

