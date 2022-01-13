#ifndef MAGICAL_DAMAGE_H
#define MAGICAL_DAMAGE_H
#include "Damage.h"

class Magical_Damage:public Damage
{
public:
    Magical_Damage();
    Magical_Damage(int Level, double _Damage);
    double Add_Damage();//Дополнительный урон от магии
    double Gradual_Damage();// Постепенный урон от магии (например от горения)
    double Total_Damage() override;// Итоговый магический урон
    double Critical_Damage() override;
};

#endif // MAGICAL_DAMAGE_H
