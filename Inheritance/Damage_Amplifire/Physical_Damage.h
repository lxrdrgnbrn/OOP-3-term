#ifndef PHYSICAL_DAMAGE_H
#define PHYSICAL_DAMAGE_H
#include "Damage.h"


class Physical_Damage: public Damage
{
public:
    Physical_Damage();//конструктор без параметров
    Physical_Damage(int Level, double _Damage);//конструктор c параметрами
    double Bleeding();// Урон от кровотечения в секунду
    double Total_Damage() override;// Итоговый урон нанесенный физическим модификатором
};

#endif // PHYSICAL_DAMAGE_H
