#include <iostream>

using namespace std;

int even (int a){
    a = a%2;
    return a;
} 



int main(){
    
    int x, y;
    cout << "\n\n\tEnter a number : ";
    cin >> x;
    y = even(x);
    if(y==0){
        cout<<"\n\n\tNumber is even.";
    }
    else{
        cout<<"\n\n\tNumber is odd.";
    }
    return 0;
}
