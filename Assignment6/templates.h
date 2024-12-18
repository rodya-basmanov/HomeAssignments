#ifndef TEMPLATES
#define TEMPLATES

#include <iostream>
#include <vector>

template<typename T1, typename T2> class GenericClass
{
public:
    T2 parameter;
    std::vector<float> floatList;
    T1 data;
    GenericClass(const T2& param, const std::vector<float>& fList, const T1& dat):
        parameter(param),
        floatList(fList),
        data(dat) {}

    bool compute()
    {
        return data.check(static_cast<int>(parameter), floatList);
    }
};

template<typename T1> class GenericClass<T1, int>
{
public:
    int parameter;
    std::vector<float> floatList;
    T1 data;
    GenericClass(const int& param, const std::vector<float>& fList, const T1& dat):
        parameter(param),
        floatList(fList),
        data(dat) {}

    bool compute()
    {
        return true;
    }
};

template<typename T1> class GenericClass<T1, double>
{
public:
    double parameter;
    std::vector<float> floatList;
    T1 data;
    GenericClass(const double& param, const std::vector<float>& fList, const T1& dat):
        parameter(param),
        floatList(fList),
        data(dat) {}

    bool compute()
    {
        return false;
    }
};

class FirstClass
{
public:
    bool check(int num, const std::vector<float>& fList)
    {
        return (num > 0);
    }

    int methodOne()
    {
        return 1;
    }

    float methodTwo()
    {
        return 1.0f;
    }

    void methodThree()
    {
        std::cout << "Example 1" << std::endl;
    }
};

class SecondClass
{
public:
    bool check(int num, const std::vector<float>& fList)
    {
        return !fList.empty();
    }

    int methodOne()
    {
        return 2;
    }

    float methodTwo()
    {
        return 2.0f;
    }

    void methodThree()
    {
        std::cout << "Example 2" << std::endl;
    }
};

class ThirdClass
{
public:
    bool check(int num, const std::vector<float>& fList)
    {
        return num == (-1) * (static_cast<int>(fList.size()));
    }

    int methodOne()
    {
        return 3;
    }

    float methodTwo()
    {
        return 3.0f;
    }

    void methodThree()
    {
        std::cout << "Example 3" << std::endl;
    }
};

#endif