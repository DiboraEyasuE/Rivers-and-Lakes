#include <iostream>
using namespace std;
string getEthiopianGreeting(int hour) {
    if (hour >= 6 && hour < 12) {
        return "እንደምን አደሩ (Endemin aderu) - Good morning";
    }
    else if (hour >= 12 && hour < 18) {
        return "እንደምን ዋሉ (Endemin walu) - Good afternoon";
    }
    else if (hour >= 18 && hour < 22) {
        return "እንደምን አመሹ (Endemin ameshu) - Good evening";
    }
    else {
        return "መልካም እረፍት (Melkam erefet) - Good rest/sleep";
    }
}

int main(){
    cout<<getEthiopianGreeting(9)<<endl;
    cout<<getEthiopianGreeting(1)<<endl;
    cout<<getEthiopianGreeting(19)<<endl;
}
