#ifndef DAMAGE_H
#define DAMAGE_H
#include <iostream>
#include <cstdlib>
#include <ctime>

class Damage // класс расчета урона оружия
{
protected:
    double _damage;//стандартный урон оружия
    int Level;//Уровень персонажа

public:
    Damage();//конструктор без параметров
    void SetLevel(int Level);// Сеттер уровня
    void SetDamage(double _damage);// Сеттер урона
    double Attack_Speed();// Скорость атаки в секунду
    int GetLevel();// Геттер уровня
    double GetDamage();// Геттер урона
    virtual double Critical_Damage();// Критический урон
    virtual double Total_Damage();// Итоговый урон
};

#endif // DAMAGE_H
