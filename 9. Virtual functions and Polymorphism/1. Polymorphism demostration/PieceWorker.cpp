#include "PieceWorker.h"

#include <iostream>

using std::cout;

PieceWorker::PieceWorker(const char *first, const char *last, double w, int q)
    :Employee(first, last)
{
    setWage(w);
    setQuanitity(q);
}

void PieceWorker::setWage(double w)
{
    wagePerPiece = w > 0 ? w : 0;
}

void PieceWorker::setQuanitity(int q)
{
    quantity = q > 0 ? q : 0;
}

double PieceWorker::earnings() const
{
    return quantity * wagePerPiece;
}

void PieceWorker::print() const
{
    cout<<"\n   Worker on piece wage: ";
    Employee::print();
}
