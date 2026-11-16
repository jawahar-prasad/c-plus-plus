#include <iostream>
using namespace std;
int main(){
    int x=4;
    cout<<x<<endl;// Output: 4
    x++;
    cout<<x<<endl;// Output: 5
    x--;
    cout<<x<<endl;// Output: 4
    cout<<x++<<endl;// Output: 4 (but x becomes 5)post increment
    cout<<x<<endl;// Output: 5
    cout<<x<<endl;// Output: 5
    cout<<++x<<endl;// Output: 6 pre increment (first increment then print)
    cout<<x<<endl;// Output: 6
return 0;
}
