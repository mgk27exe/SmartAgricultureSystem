#ifndef TARLA_H
#define TARLA_H

struct Tarla {
    int tarlaNo;
    bool sulama;
    bool guBreleme;
    bool ilac;
    bool capalama;

    Tarla(int tarlaNo, bool sulama, bool guBreleme, bool ilac, bool capalama);
};

#endif
