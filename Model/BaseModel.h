//
// Created by ktwzj on 2018/6/23.
//

#ifndef OOP_GAME_BASEMODEL_H
#define OOP_GAME_BASEMODEL_H
#define DIMENSION 2
#include <iostream>
namespace Model {
    class BaseModel {
    protected:
        bool visibility;
        float position[DIMENSION];
        std::string name;
    public:
        virtual void die();
        virtual void on_create();
        /*
         * 物体出现/消失（指图形上的出现/消失，修改可见性）
         */
        virtual void emerge();
        virtual void vanish();
    };
}


#endif //OOP_GAME_BASEMODEL_H
