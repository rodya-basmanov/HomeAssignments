/* ## Assignment3
## Author
Basmanov Rodion B81-mm
## Contacts
st135699@student.spbu.ru
## Description
assignment 3 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

// Класс для оружия
class Weapon {
public:
    Weapon(const std::string& name = "Default Weapon", unsigned int damage = 0)
        : name(name), damage(damage) {}

    std::string getName() const { return name; }
    unsigned int getDamage() const { return damage; }

    void setName(const std::string& newName) { name = newName; }
    void setDamage(unsigned int newDamage) { damage = newDamage; }

private:
    std::string name;
    unsigned int damage;
};

// Класс для брони
class Armor {
public:
    Armor(const std::string& type = "Default Armor", unsigned int strength = 0)
        : type(type), strength(strength) {}

    std::string getType() const { return type; }
    unsigned int getStrength() const { return strength; }

    void setType(const std::string& newType) { type = newType; }
    void setStrength(unsigned int newStrength) { strength = newStrength; }

private:
    std::string type;
    unsigned int strength;
};

// Базовый класс Transformer
class TransformerBase {
public:
    TransformerBase();
    virtual ~TransformerBase();

    // Методы движения
    virtual bool move();
    virtual bool jump();
    virtual bool attack();

    // Get-set методы для работы с полями
    void setHealth(unsigned int h) { health = h; }
    unsigned int getHealth() const { return health; }

    void setArmor(unsigned int a) { armor = a; }
    unsigned int getArmor() const { return armor; }

    void setCurrentWeapon(unsigned int w) { currentWeapon = w; }
    unsigned int getCurrentWeapon() const { return currentWeapon; }

    void setFirepower(unsigned int f) { firepower = f; }
    unsigned int getFirepower() const { return firepower; }

    const Weapon& getPrimaryWeapon() const { return primaryWeapon; }
    void setPrimaryWeapon(const Weapon& weapon) { primaryWeapon = weapon; }

    const Armor& getDefensiveArmor() const { return defensiveArmor; }
    void setDefensiveArmor(const Armor& armor) { defensiveArmor = armor; }

protected:
    unsigned int health;         // Здоровье
    unsigned int armor;          // Уровень брони
    unsigned int currentWeapon;  // Текущее количество зарядов
    unsigned int firepower;      // Сила атаки

    Weapon primaryWeapon;        // Поле-объект для оружия
    Armor defensiveArmor;        // Поле-объект для брони
};

#endif