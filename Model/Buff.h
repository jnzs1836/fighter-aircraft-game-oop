//
// Created by ktwzj on 2018/6/23.
//

#ifndef OOP_GAME_BUFF_H
#define OOP_GAME_BUFF_H


namespace Model{
    class Buff{
    protected:
        int time;
    public:
        Buff();
        ~Buff();
        void emerge();
        void vanish();
//        bool operator<(const Buff& b);

    };
}

#endif //OOP_GAME_BUFF_H
