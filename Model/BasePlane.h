//
// Created by ktwzj on 2018/6/23.
//

#ifndef OOP_GAME_BASEPLANE_H
#define OOP_GAME_BASEPLANE_H

#include "AirModel.h.h"
#define MAX_WEAPON_STOCK 100
namespace Model {
    struct WeaponStock{
        int bulletIdList[MAX_WEAPON_STOCK];
        int num;
    };
class BasePlane : public AirModel{
protected:
    float power,acceleration,speed, hp;
    float defense;
public:
    /*
     * 飞机控制函数
     * fire: air plane is fires
     * breakdown: 被击落
     *
     */
    void setDefense(value);
    void getDefense(value);
    void setSpeed(value);
    float getSpeed();
    void setHp(value);
    float getHp(value);
    void addWeapon(int bulletId);
    void fire(int bulletId);
    void breakdown();
};
}

#endif //OOP_GAME_BASEPLANE_H
