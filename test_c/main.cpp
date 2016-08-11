//
//  main.cpp
//  test_c
//
//  Created by toysking on 2016/08/10.
//  Copyright © 2016年 toysking. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Neko{
private:
    string name;
    
public:
    Neko(string s);
    void naku();
};

Neko::Neko(string s){
    name =s;
}
//or
// Neko::Neko(string s)::name(s){};

void Neko::naku(){
    std::cout << name << "nyawn" << endl;
}



int main(int argc, const char * argv[]) {
    string name;
    std::cin >> name;
    
    Neko dora(name);
    
    dora.naku();
    
    return 0;
}
