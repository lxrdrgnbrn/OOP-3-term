#ifndef PHYSICAL_DAMAGE_H
#define PHYSICAL_DAMAGE_H
#include "Damage.h"


class Physical_Damage: public Damage
{
public:
    Physical_Damage();//конструктор без параметров
    Physical_Damage(int Level, double _damage);//конструктор c параметрами
    double Bleeding();// Урон от кровотечения в секунду
    double AddDamage();// Дополнительный урон от физ модификатора
    double Critical_Damage() override;// Критический урон
    double Total_Damage() override;// Итоговый урон нанесенный физическим модификатором
};

#endif // PHYSICAL_DAMAGE_H
