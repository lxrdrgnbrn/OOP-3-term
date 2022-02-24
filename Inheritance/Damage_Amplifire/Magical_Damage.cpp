#include "Magical_Damage.h"

Magical_Damage::Magical_Damage():Damage()
{
}

Magical_Damage::Magical_Damage(int Level, double _damage)
{
    SetDamage(_damage);
    SetLevel(Level);
}

double Magical_Damage::Add_Damage()
{
    return 50*Level*0.1;
}

double Magical_Damage::Gradual_Damage()
{
    return Add_Damage()*0.01*((_damage*Level)/100)*Level*0.1;
}

double Magical_Damage::Critical_Damage()
{
    srand(time(0));
    return (_damage+Add_Damage())*Level*0.5*(double)(rand()%10);
}

double Magical_Damage::Total_Damage()
{
    return Damage::Total_Damage()+Add_Damage()+(Gradual_Damage()*60);
}

