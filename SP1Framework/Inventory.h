#pragma once
#include <iostream>
#include "Items.h"
using namespace std;
// there are three sets of items weapons, healing, armour
class Item
{
private:
    string Itemname; // hello test
    int itemnumber;
    int ItemBaseValue;
    string ItemDescription;
    int MaxItemCharges;
    bool Weapon;
    bool Healing;
    bool Armour;
    int WeaponBase;
    int Healingbase;
public:
    void setItemnumber(int number)
    {
        itemnumber = number;
    }
    int GetItemnumber()
    {
        return(itemnumber);
    }
    string getItemname()
    {
        return(Itemname);
    }
    int getItemBaseValue()
    {
        return(ItemBaseValue);
    }
    int getWeaponBase()
    {
        return(WeaponBase);
    }
    int getHealingBase()
    {
        return(Healingbase);
    }
    string getType()
    {
        string type;
        if (Weapon == true)
        {
            type = "Weapon";
        }
        if (Healing == true)
        {
            type = "Edibles";
        }
        if (Armour == true)
        {
            type = "Armour";
        }
        
        return(type);
    }
    void setItemname(string name)
    {
        Itemname = name;
    }
    void setItemdesc(string description)
    {
        ItemDescription = description;
    }
    void setHealingBase(int number)
    {
        Healingbase = number;
    }
    void setItemvalue(int number)
    {
        ItemBaseValue = number;
    }
    void setWbase(int number)
    {
        WeaponBase = number;
    }
    void setType(string type)
    {
        if (type == "Weapon")
        {
            Weapon = true;
        }
        if (type == "Edibles")
        {
            Healing = true;
        }
        if (type == "Armour")
        {
            Armour = true;
        }
      
    }
    int getitemtype(int number)
    {
        number = 0;
        if (Weapon == true)
        {
            number = 1;
        }
        if (Armour == true)
        {
            number = 2;
        }
       
        if (Healing == true)
        {
            number = 3;
        }
        return(number);
    }
};

