/* PROJECT : */
/* Description */

#include <iostream>
#include <cstring>

using namespace std;

int main (){
    char replay [30];
    int ;

 do {
    // Code here
    
    cout << "Press any key to play again or 0 (zero) to exit : ";
    cin.getline (replay,30);
    cout << endl;

    } while (!(strlen(replay)==1 && replay[0]=='0'));

    return 0;
}
