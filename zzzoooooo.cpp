#include<iostream>
using namespace std;

bool times(string world){
    int count = 0;
    for(int i=0; i<world.length(); i++){
        if(world[i] == 'z'){
            count++;
        }
    }
    int cnt = 0;
    for(int i=0; i<world.length()-1; i++){
        if(world[i] == 'o'){
            cnt++;
        }
    }
    if(count*2 == cnt){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string world = "zzzoooooo";

    if(!times){
        cout << " false  " << endl;
    }else{
        cout << " true " << endl;
    }
    

    return 0;
}