//
// Created by ktwzj on 2018/6/23.
//

#ifndef OOP_GAME_TOOLMODEL_H
#define OOP_GAME_TOOLMODEL_H

#include "AirModel.h"
#include <vector>
#include "Buff.h"
namespace Model {
    class ToolModel: AirModel {
    protected:
        std::vector<Buff> buffList;
        public:
        std::vector<Buff> getBuffList();


    };
}
#endif //OOP_GAME_TOOLMODEL_H
