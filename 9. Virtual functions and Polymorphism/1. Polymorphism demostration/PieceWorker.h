#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include "Employee.h"

class PieceWorker : public Employee
{
    public:
        PieceWorker(const char*, const char*, double = 0.0, int = 0);
        void setWage(double);
        void setQuanitity(int);
        virtual double earnings() const;
        virtual void print() const;

    private:
        double wagePerPiece;
        int quantity;
};

#endif // PIECEWORKER_H
