#ifndef TESTMUTABLE_H
#define TESTMUTABLE_H


class TestMutable
{
    public:
        TestMutable(int v = 0);
        void modifyValue() const;
        int getValue() const;

    private:
        mutable int value;
};

#endif // TESTMUTABLE_H
