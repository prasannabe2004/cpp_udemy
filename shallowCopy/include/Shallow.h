#pragma once
#include <string>

class Shallow {
    private:
        int *data;
    public:
        Shallow(int d);
        void set_data_value(int v);
        int get_data_value(void);
        Shallow(const Shallow &);
        ~Shallow();
};