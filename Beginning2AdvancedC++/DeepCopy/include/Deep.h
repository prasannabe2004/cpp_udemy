#pragma once
#include <string>

class Deep {
    private:
        int *data;
    public:
        Deep(int d);
        void set_data_value(int v);
        int get_data_value(void);
        Deep(const Deep &);
        ~Deep();
};