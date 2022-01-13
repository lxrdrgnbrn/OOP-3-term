//Программа расчитывает урон с модификаторами нанесенный оружием в минуту для игры в жанре РПГ

#include <QCoreApplication>
#include "Damage.h"
#include "iostream"
#include <cstdlib>
#include "Physical_Damage.h"
#include "Magical_Damage.h"
using namespace std;

int main()
{
    int Level=5;
    double Sword=2;

    cout<<"Character Level: "<<Level<<endl;

    Physical_Damage PD= *new Physical_Damage(Level, Sword);

    cout<<"Attack Speed: "<<PD.Attack_Speed()<<endl;
    cout<<endl;
    cout<<"Physical Damage"<<endl;   
    cout<<"Bleeding damage per second: "<<PD.Bleeding()<<endl;
    cout<<"Critical Damage: "<<PD.Critical_Damage()<<endl; 
    cout<<"Total Physical Damage: "<<PD.Total_Damage()<<endl; 
    cout<<endl;

    Magical_Damage *MD= new Magical_Damage(Level,Sword);

    cout<<"Magic Damage"<<endl;
    cout<<"Additional magic damage: "<<MD->Add_Damage()<<endl;
    cout<<"Gradual damage from magic per second: "<<MD->Gradual_Damage()<<endl;
    cout<<"Critical Damage: "<<MD->Critical_Damage()<<endl;
    cout<<"Total Magic Damage: "<<MD->Total_Damage()<<endl;
    cout<<endl;
    cout<<"Total Damage: "<<MD->Total_Damage()+PD.Total_Damage()<<endl;
    cout<<endl;
    return 0;
}
