#include <iostream>
#include <ctime>

int main(){
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "starting " << endl;
    clock_t start = clock();
    while(clock() - start < delay)
        ;
    cout << "done.\n\n";
    return 0;
}
