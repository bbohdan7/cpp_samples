#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("The values in any left subtree \nare less than the value in the \nparent node and the values in \nany right subtree are grater \nthan the value in the parent node");

    cout<<"Initial string:\n"<<s
        <<"\n\n(find) 'subtree' found in: "
        <<s.find("subtree")
        <<"\n(rfind) 'subtree' found in: "
        <<s.rfind("subtree");

    cout<<"\n(find_first_of) symbol of 'qpxz' in: "
        <<s.find_first_of("qpxz")
        <<"\n(find_last_of) symbol of 'qpxz' in: "
        <<s.find_last_of("qpxz");

    cout<<"\n(find_first_not_of) first symbol not\n"
        <<"         consisted in 'heTv lusinodrpayft': "
        <<s.find_first_not_of("heTv lusinodrpayft");

    cout<<"\n(find_last_not_of) first symbol not\n"
        <<"         consisted in 'heTv lusinodrpayft'"
        <<s.find_last_not_of("heTv lusinodrpayft")<<endl;

    return 0;
}
