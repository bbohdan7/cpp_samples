#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "List.h"
#include "List.cpp";

template<class T>
void testList(List<T>&, const char*);

int main()
{
    List<int> integerList;
    testList(integerList, "Integer");

    List<double> doubleList;
    testList(doubleList, "Double");

    return 0;
}

template<class T>
void testList(List<T> &listObject, const char *type)
{
    void instructions();

    cout<<"Testing list "<<type<<" - value\n";

    instructions();

    int choice;
    T value;

    do{
        cout<<"? ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter "<<type<<": ";
                cin>>value;
                listObject.insertAtFront(value);
                listObject.print();
                break;
            case 2:
                cout<<"Enter "<<type<<": ";
                cin>>value;
                listObject.insertAtBack(value);
                listObject.print();
                break;
            case 3:
                if(listObject.removeFromFront(value))
                    cout<<value<<" has been deleted from list\n";

                listObject.print();
                break;
            case 4:
                if(listObject.removeFromBack(value))
                    cout<<value<<" has been deleted from list\n";

                listObject.print();
                break;
        }
    } while(choice != 5);

    cout<<"Finishing testing list\n\n";
}

void instructions()
{
    cout<<"Enter one of next:\n"
        <<" 1 - Insert at front of the list\n"
        <<" 2 - Insert at back of the list\n"
        <<" 3 - Remove from front of the list\n"
        <<" 4 - Remove from back of the list\n"
        <<" 5 - Exit\n";
}
