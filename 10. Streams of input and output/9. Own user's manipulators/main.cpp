#include <iostream>

using std::ostream;
using std::cout;
using std::flush;

ostream &bell(ostream &output)
{
    return output<<'\a';
}

ostream &ret(ostream &output)
{
    return output<<'\r';
}

ostream &tab(ostream &output)
{
    return output<<'\t';
}

ostream &endLine(ostream &output)
{
    return output<<'\n'<<flush;
}

int main()
{
    cout<<"Testing tab-manipulator:"<<endLine
        <<'a'<<tab<<'b'<<tab<<'c'<<endLine
        <<"Testing ret and bell manipulators:"<<endLine<<"...........";
    cout<<bell;
    cout<<ret<<"-----"<<endLine;

    return 0;
}
