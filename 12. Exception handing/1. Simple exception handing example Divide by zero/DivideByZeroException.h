#ifndef DIVIDEBYZEROEXCEPTION_H
#define DIVIDEBYZEROEXCEPTION_H


class DivideByZeroException
{
    public:
        DivideByZeroException();
        const char *what() const;

    private:
        const char *message;
};

#endif // DIVIDEBYZEROEXCEPTION_H
