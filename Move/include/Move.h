#pragma once
#include <string>

class Move {
    private:
        int *data;
    public:
        Move(int d);
        void set_data_value(int v);
        int get_data_value(void);
        Move(const Move &);
        Move(Move &&) noexcept;
        ~Move();
};