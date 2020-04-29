#ifndef CONSTCASTTEST_H
#define CONSTCASTTEST_H


class ConstCastTest
{
    public:
        ConstCastTest();
        void setNumber(int);
        int getNumber() const;
        void printNumber() const;

    private:
        int number;
};

#endif // CONSTCASTTEST_H
