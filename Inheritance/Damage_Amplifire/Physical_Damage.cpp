#include "Physical_Damage.h"

Physical_Damage::Physical_Damage():Damage()
{
}

Physical_Damage::Physical_Damage(int Level, double _damage)
{
    SetDamage(_damage);
    SetLevel(Level);;
}

double Physical_Damage::AddDamage()
{
    return 25*Level*0.5;
}

double Physical_Damage::Bleeding()
{
    return (_damage*Level)/100*Level*0.1;
}

double Physical_Damage::Total_Damage()
{
    return Damage::Total_Damage()+Bleeding()*60;
}

double Physical_Damage::Critical_Damage()
{
    srand(time(0));
    return (_damage*AddDamage())*Level*0.5*(double)(rand()%10);
}
