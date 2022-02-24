#ifndef MAGICAL_DAMAGE_H
#define MAGICAL_DAMAGE_H
#include "Damage.h"

class Magical_Damage:public Damage
{
public:
    Magical_Damage();// Конструктор без параметров
    Magical_Damage(int Level, double _damage);// Конструктор с параметрами
    double Add_Damage();//Дополнительный урон от магии
    double Gradual_Damage();// Постепенный урон от магии (например от горения)
    double Total_Damage() override;// Итоговый магический урон
    double Critical_Damage() override;// Критический урон
};

#endif // MAGICAL_DAMAGE_H
