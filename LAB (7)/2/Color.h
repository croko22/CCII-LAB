#pragma once
//Color.h
class Color
{
    public:
        Color();
        ~Color();
        int Getr() { return r; }
        void Setr(int val) { r = val; }
        int Getg() { return g; }
        void Setg(int val) { g = val; }
        int Getb() { return b; }
        void Setb(int val) { b = val; }
    protected:
        int r;
        int g;
        int b;
};