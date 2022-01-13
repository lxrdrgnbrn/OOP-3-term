#include "Physical_Damage.h"

Physical_Damage::Physical_Damage():Damage()
{
}

Physical_Damage::Physical_Damage(int Level, double _Damage)
{
    SetDamage(_Damage);
    SetLevel(Level);;
}

double Physical_Damage::Bleeding()
{
    return (_Damage*Level)/100*Level*0.1;
}

double Physical_Damage::Total_Damage()
{
    return Damage::Total_Damage()+Bleeding()*60;
}
