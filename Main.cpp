#include "List.cpp"
int main()
{
    List<int> l;
    cout<<l.addAtBeginning(10)<<endl;
    cout<<l.addAtBeginning(20)<<endl;
    cout<<l.addAtBeginning(30)<<endl;
    l.display();

    return 0;
}
