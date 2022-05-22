#pragma once
//Material.h
class Material
{
    public:
        Material();
        ~Material();
        string Getmat() { return mat; }
        void Setmat(string val) { mat = val; }

    protected:
        string mat;
};