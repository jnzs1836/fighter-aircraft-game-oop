//
// Created by ktwzj on 2018/6/23.
//

#ifndef OOP_GAME_PLAYERPLANE_H
#define OOP_GAME_PLAYERPLANE_H

#include "BasePlane.h"
#include <vector>
#include "Buff.h"
namespace Model {
    class PlayerPlane: BasePlane{
    protected:
        std::vector<Buff>;
        int level;
        float levelBaseHp, levelBaseSpeed;
        int exp;
    public:
        void increaseExp();
        void lift();
        void setExtraHp(value);
        float getExtraHp();
        float getLevelBaseHp();

    };
}
#endif //OOP_GAME_PLAYERPLANE_H
